/*
 * KEYPAD_app.c
 *
 *  Created on: Sep 7, 2019
 *      Author: hp
 */
#include "STD_TYPE.h"
#include"util/delay.h"
#include "DIO_interface.h"
#include "KEYPAD_interface.h"
 int main ()
 {
DIO_voidSetPortDir(KPD_PORT,0x0F) ;/*0b00001111*/ // l 3lih 1 output l 3lih 0 input
DIO_voidSetPortValue(KPD_PORT,0xFF); /* pullup */ /* first f l inputs pull up and second F l outputs b 1 by default*/



u8 sevensegment[10] = {0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};




 DIO_voidSetPortDir(DIO_PORT0,255);



/*--------------------------------------------------------*/
 /*assignment 1*/
 //gwa l while 1
 /*u8 dash[7] = {0b00000001,0b00000010,0b00000100,0b0001000,0b000010000,0b01000000,0b01000000,0b01111101};
 u8 u8PressedKey;
 u8PressedKey=KPD_u8GetPressedKey();

 DIO_voidSetPortDir(DIO_PORT0,255);
  for(u8 i =0;i<7;i++)
  {


 	// DIO_voidSetPortValue(DIO_PORT0,dash[i]);
 //_delay_ms(10000);
  }


}*/





while(1)
{


	u8 x = KPD_u8GetPressedKey();
	 DIO_voidSetPortValue(DIO_PORT0,sevensegment[x]);
	_delay_ms(10000);

}

}
