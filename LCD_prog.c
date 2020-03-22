/*
 * Lcd_prog.c
 *
 *  Created on: Aug 30, 2019
 *      Author: hp
 */


#include "STD_TYPE.h"
#include "DIO_interface.h"
#include "LCD_interface.h"
#include"util/delay.h"
void LCD_voidWriteCommand(u8 u8Command_cpy)
{
	/*set E->LOW*/
	DIO_voidsetPinValue(LCD_CONTROL_PORT ,	LCD_E_PIN,DIO_Low);

	/*SET RS->LOW*/
	DIO_voidsetPinValue(LCD_CONTROL_PORT,LCD_RS_PIN,DIO_Low);

	/*SET RW->LOW*/
	DIO_voidsetPinValue(LCD_CONTROL_PORT,LCD_RW_PIN,DIO_Low);

	/*SET DATA PINS >>COMMAND*/
	DIO_voidSetPortValue(LCD_DATA_PORT, u8Command_cpy);
	/****ENABLE SEQUENCE*****/
	/* SET ENABLE->HIGH*/
	DIO_voidsetPinValue(LCD_CONTROL_PORT,LCD_E_PIN,DIO_High);
	/*WAIT FOR 1 ms*/
	_delay_ms(1);
	/* SET ENABLE LOW */
	DIO_voidsetPinValue(LCD_CONTROL_PORT ,	LCD_E_PIN,DIO_Low);
}
void LCD_voidwriteData(u8 u8Data_cpy)
{
	/*set E->LOW*/
	DIO_voidsetPinValue(LCD_CONTROL_PORT ,	LCD_E_PIN,DIO_Low);

	/*SET RS->HIGH*/
	DIO_voidsetPinValue(LCD_CONTROL_PORT,LCD_RS_PIN,DIO_High);

	/*SET RW->LOW*/
	DIO_voidsetPinValue(LCD_CONTROL_PORT,LCD_RW_PIN,DIO_Low);

	/*SET DATA PINS >>COMMAND*/
	DIO_voidSetPortValue(LCD_DATA_PORT, u8Data_cpy);
	/****ENABLE SEQUENCE*****/
	/* SET ENABLE->HIGH*/
	DIO_voidsetPinValue(LCD_CONTROL_PORT ,	LCD_E_PIN,DIO_High);
	/*WAIT FOR 1 ms*/
	_delay_ms(1);
	/* SET ENABLE LOW */
	DIO_voidsetPinValue(LCD_CONTROL_PORT ,	LCD_E_PIN,DIO_Low);


}
void LCD_voidIntialize(void)
{

	_delay_ms(30);
	LCD_voidWriteCommand(0b00111000);
	_delay_ms(1);
	LCD_voidWriteCommand(0b00001100);
	_delay_ms(1);
	LCD_voidWriteCommand(0b00000001);
	_delay_ms(1);
	LCD_voidWriteCommand(0b00000110);
	_delay_ms(2);

}
void LCD_voidWriteString(u8 *pu8string,u8 size)
{
	/*u8 i;
	for(i=0;i<size;i++)
	{
		LCD_voidwriteData(pu8string[i]);=*(pu8string+i)
	}*/

	while (*pu8string !='\0')
	{
		LCD_voidwriteData(*pu8string);
		pu8string++;

	}
}
void LCD_voidGotoXY(u8 x,u8 y)
{
	u8 AC;
	AC=128+(0X40*y)+x;
	LCD_voidWriteCommand(AC);
	// aw l t7t dh kolo bdl l str dh
	/*

	if(y==0)
	{
		AC=0x00+x;
	}
	else if(y==1)
	{
			AC=0x40+x;
	}
		else
		{
	}
	command=AC | 0b10000000; //3chan yb2a awlo 1 3chan dh command
	LCD_voidWriteCommand(command);
	 */
	/*--------------------------------------------------------------------------------*/
	/* any a3ml or m3 10000000 hwa hwa lama agm3 128 3chan l 128 l binary bt3ha kda */

}

void LCD_voidWriteNumber(u16 i)
{

	u8 k=0;
	u16 num[5];
	u16 c;
	while(i>0)
	{
		num[4-k]=i%10;
		i=i/10;
		k++;
		/*  u8 temp;
	temp=num[k];
	num[k+1]=temp;
	num[k]=num[k+1];*/
		for (u8 j=0;j<k;j++)
		{
			c=num[j]+'0';

		}
		LCD_voidwriteData(c);
	}


}


/*for(u8 i =0;i<k;i++)
	{
		num[k]=i%10;
			  i=i/10;
			  k--;
	}

			  for (u8 j=0;j<k;j++)
			  	{
			  	c=num[j]+'0';

			  	}
			  LCD_voidwriteData(c);

}*/

/* k--;
	 for (p=k;p>=0;p--)
	 {
	   c=num[p]+48;

	 }*/




