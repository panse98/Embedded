/*

 * DIO_prog.c
 *
 *  Created on: Aug 24, 2019
 *      Author: hp
 */

#include"util/delay.h"
#include"STD_TYPE.h"
#include"BIT_MATH.h"
#include"AVR_DIO_REG.h"
#include"DIO_interface.h"

void DIO_voidsetPinDir (DIO_PORTS enuPortIdx_Cpy,
		DIO_PINS enuPinIdx_Cpy,
		DIO_DIR enuValue_Cpy)
{


	switch (enuPortIdx_Cpy)// anhy port
	{

	case DIO_PORT0:
		if (enuValue_Cpy==DIO_Input)
		{
			CLR_BIT(DDRA,enuPinIdx_Cpy);

		}else if (enuValue_Cpy==DIO_Output)
		{
			SET_BIT(DDRA,enuPinIdx_Cpy);
		}
		else{

		}
		break;
	case DIO_PORT1:
		if (enuValue_Cpy==DIO_Input)
		{
			CLR_BIT(DDRB,enuPinIdx_Cpy);

		}else if (enuValue_Cpy==DIO_Output)
		{
			SET_BIT(DDRB,enuPinIdx_Cpy);
		}
		else{

		}
		break;

	case DIO_PORT2:
		if (enuValue_Cpy==DIO_Input)
		{
			CLR_BIT(DDRC,enuPinIdx_Cpy);

		}else if (enuValue_Cpy==DIO_Output)
		{
			SET_BIT(DDRC,enuPinIdx_Cpy);
		}
		else{

		}
		break;
	case DIO_PORT3:
		if (enuValue_Cpy==DIO_Input)
		{
			CLR_BIT(DDRD,enuPinIdx_Cpy);

		}else if (enuValue_Cpy==DIO_Output)
		{
			SET_BIT(DDRD,enuPinIdx_Cpy);
		}
		else{

		}
		break;

	}
}
void DIO_voidsetPinValue(DIO_PORTS enuPortIdx_Cpy,
		DIO_PINS enuPinIdx_Cpy,
		DIO_DIR enuValue_Cpy)
{


	switch (enuPortIdx_Cpy)// anhy port
	{

	case DIO_PIN0:
		if(enuValue_Cpy==DIO_Low)
		{
			CLR_BIT(PORTA,enuPinIdx_Cpy);

		}else if (enuValue_Cpy==DIO_High)
		{
			SET_BIT(PORTA,enuPinIdx_Cpy);
		}
		else{

		}
		break;
	case DIO_PORT1:
		if (enuValue_Cpy==DIO_Low)
		{
			CLR_BIT(PORTB,enuPinIdx_Cpy);

		}else if (enuValue_Cpy==DIO_High)
		{
			SET_BIT(PORTB,enuPinIdx_Cpy);
		}
		else{

		}
		break;

	case DIO_PORT2:
		if (enuValue_Cpy==DIO_Low)
		{
			CLR_BIT(PORTC,enuPinIdx_Cpy);

		}else if (enuValue_Cpy==DIO_High)
		{
			SET_BIT(PORTC,enuPinIdx_Cpy);
		}
		else{

		}
		break;
	case DIO_PORT3:
		if (enuValue_Cpy==DIO_Low)
		{
			CLR_BIT(PORTD,enuPinIdx_Cpy);

		}else if (enuValue_Cpy==DIO_High)
		{
			SET_BIT(PORTD,enuPinIdx_Cpy);
		}
		else{

		}
		break;

	}

}
// m7dsh hy include l registers 8er l DIO
void DIO_voidSetPortDir(DIO_PORTS enuPortIdx_Cpy,u8 u8Direction_Cpy)
{
	switch(enuPortIdx_Cpy)


	{
	case DIO_PORT0:

		DDRA=u8Direction_Cpy;
		break;
	case DIO_PORT1:
		DDRB=u8Direction_Cpy;
		break;
	case DIO_PORT2:
		DDRC=u8Direction_Cpy;
		break;
	case DIO_PORT3:
		DDRD=u8Direction_Cpy;
		break;
	}
}

void DIO_voidSetPortValue(DIO_PORTS enuPortIdx_Cpy,
		u8 u8Value_Cpy){

	switch(enuPortIdx_Cpy)
	{
	case DIO_PORT0:
		PORTA=u8Value_Cpy;
		break;
	case DIO_PORT1:
		PORTB=u8Value_Cpy;
		break;
	case DIO_PORT2:
		PORTC=u8Value_Cpy;
		break;
	case DIO_PORT3:
		PORTD=u8Value_Cpy;
		break;


	}


}

DIO_Value DIO_enuGetPinValue(u8 enuPortIdx_Cpy, u8 enuPInIdx_Cpy)
{
	DIO_Value enuPinValue_Loc;

	switch(enuPortIdx_Cpy)
	{
	case(DIO_PORT0):

	enuPinValue_Loc=GET_BIT(PINA,enuPInIdx_Cpy);// kol port leh 3 registers port w pin w ddr
	break;

	case(DIO_PORT1):

		enuPinValue_Loc=GET_BIT(PINB,enuPInIdx_Cpy);
		break;

	case(DIO_PORT2):

		enuPinValue_Loc=GET_BIT(PINC,enuPInIdx_Cpy);
				break;

	case(DIO_PORT3):

		enuPinValue_Loc=GET_BIT(PIND,enuPInIdx_Cpy);
						break;
	}
	return enuPinValue_Loc;
}

