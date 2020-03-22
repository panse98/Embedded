
#include "STD_TYPE.h"
#include "DIO_interface.h"
#include "LCD_interface.h"
#include"util/delay.h"
int main ()
{

	DIO_voidSetPortDir(DIO_PORT0,255);// port register lw output w register l pin mloch lzma
		DIO_voidSetPortDir(DIO_PORT3,255);
	//	//  fe 7alt l input bst5dm ml pin register (read only register ) w bst5dm l port 3chan a7dd hwa floating wala pull up
			LCD_voidWriteCommand(0b01000000);
			LCD_voidIntialize();

	//	// LCD_voidWriteNumber(12345);
		LCD_voidGotoXY(0,0);
		u8 myname[]=" PANSE";
  LCD_voidWriteString(myname,6);

	//	LCD_voidwriteData(' ' );
	//	LCD_voidwriteData('P');
	//	LCD_voidwriteData('A');
	//	LCD_voidwriteData('N');
	//	LCD_voidwriteData('S');
	//	LCD_voidwriteData('E');
	//
	//
	//	DIO_voidsetPinValue(DIO_PORT1,
	//			DIO_PIN2,
	//			DIO_Output);
	//	//	DIO_Value x;
	//
	//	//	DIO_voidsetPinDir(0,3,DIO_Input);//switch
	//	//	DIO_voidsetPinValue(0,3,DIO_High);//pulup
	//	DIO_voidsetPinDir(1,2,DIO_Output);//LEd
	//
	//
	//
	//
	//
	//	/* LCD_voidWriteCommand(0b01000000);
	//	 /* 7rf l beh */
//	//u8 u8Namechar1[]={0b00010001,
//	/*	 0b00010001,
//			 0b00010001,
//			 0b00010001,
//			 0b00010001,
//			 0b00011111,
//			 0b00000000,
//			 0b00000100,
//
//	 };*/
//	// 7rf l alf
//	/* u8 u8Namechar2[]={0b00001000,
//			 0b00001000,
//			 0b00001000,
//			 0b00001000,
//			 0b00001000,
//			 0b00001000,
//			 0b00001000,
//			 0b00001000
//
//	 };*/
//	/*7rf l non
//	 u8 u8Namechar3[]=
//	 {
//			 0b00000100,0b00000000,
//			 0b00010001,0b00010001,0b00010001,0b00010001,0b00010001,0b00010001
//
//	 };*/
//	/* u8 u8Namechar3[]={
//
//			 0b00000000,0b00000000,
//			 0b00000001, 0b00000001,0b00011111,0b00000000,0b00000000
//
//
//	 };
//	 u8 u8Namechar4[]={
//			 0b00000000, 0b00000000, 0b00000000, 0b00010101,0b00010101,0b00011111, 0b00000000, 0b00000000
//
//
//	 };
//
//	 u8 u8Namechar5[]={
//			 0b00000000,0b00000000,0b00000000,0b00000001,0b00000001,0b00011111,0b00001010
//	 };*/
//
//
//
//	/*	 for(u8 i=0;i<8;i++)
//	 {
//		 LCD_voidwriteData(u8Namechar1[i]);
//
//	 }
//	 for(u8 i=0;i<8;i++)
//	 {
//		 LCD_voidwriteData(u8Namechar2[i]);
//
//	 }
//	 for(u8 i=0;i<8;i++)
//	 {
//		 LCD_voidwriteData(u8Namechar3[i]);
//
//	 }
//	 for(u8 i=0;i<8;i++)
//	 {
//		 LCD_voidwriteData(u8Namechar4[i]);
//
//	 }
//	 for(u8 i=0;i<8;i++)
//	 {
//		 LCD_voidwriteData(u8Namechar5[i]);
//
//	 }
//
//
//	 LCD_voidGotoXY(0, 0);
//
//
//	 LCD_voidwriteData(4);
//	 LCD_voidwriteData(3);
//
//	 LCD_voidwriteData(2);
//
//	 LCD_voidwriteData(1);
//
//	 LCD_voidwriteData(0);
//
//
//	 */
//	DIO_voidsetPinDir(1,2,DIO_Output);//LEd
//	DIO_voidSetPortDir(DIO_PORT1,255);
//
//	while(1)
//	{
//
//		DIO_voidsetPinValue(DIO_PORT1,DIO_PIN2,DIO_High);
//		DIO_voidsetPinValue(DIO_PORT1,DIO_PIN3,DIO_Low);
//
//		_delay_ms(2000);
//		DIO_voidsetPinValue(DIO_PORT1,DIO_PIN2,DIO_Low);
//		DIO_voidsetPinValue(DIO_PORT1,DIO_PIN3,DIO_High);
//
//		_delay_ms(2000);
//
  while(1){
  }

}
