/*
 * DIO_interface.h
 *
 *  Created on: Aug 24, 2019
 *      Author: hp
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_



typedef enum {
	DIO_PORT0,
	DIO_PORT1,
	DIO_PORT2,
	DIO_PORT3,
}DIO_PORTS;

typedef enum {
	DIO_PIN0,
	DIO_PIN1,
	DIO_PIN2,
	DIO_PIN3,
	DIO_PIN4,
	DIO_PIN5,
	DIO_PIN6,
    DIO_PIN7,

}DIO_PINS;
typedef enum {
	DIO_Input,
	DIO_Output
}DIO_DIR;
typedef enum {
	DIO_Low,
	DIO_High

}DIO_Value;
//Description:
//Inputs:
//Outputs:
void DIO_voidsetPinDir (DIO_PORTS enuPortIdx_Cpy,
		DIO_PINS enuPinIdx_Cpy,
		DIO_DIR enuDir_Cpy);

void DIO_voidsetPinValue(DIO_PORTS enuPortIdx_Cpy,
		DIO_PINS enuPinIdx_Cpy,
		DIO_DIR enuValue_Cpy);
void DIO_voidSetPortDir(DIO_PORTS enuPortIdx_Cpy,u8 u8Direction_Cpy);


void DIO_voidSetPortValue(DIO_PORTS enuPortIdx_Cpy,u8 u8Value_Cpy);

DIO_Value DIO_enuGetPinValue(u8 enuPortIdx_Cpy,u8 enuPInIdx_Cpy);
#endif /* DIO_INTERFACE_H_ */
