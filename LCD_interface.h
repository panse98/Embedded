/*
 * Lcd_interface.h
 *
 *  Created on: Aug 30, 2019
 *      Author: hp
 */

#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

#define LCD_CONTROL_PORT  DIO_PORT0

#define LCD_E_PIN         DIO_PIN2
#define LCD_RS_PIN        DIO_PIN0
#define LCD_RW_PIN        DIO_PIN1


#define LCD_DATA_PORT  DIO_PORT3

void LCD_voidWriteCommand(u8 u8Command_cpy);
void LCD_voidwriteData(u8 u8Data_cpy);
void LCD_voidIntialize(void);
void LCD_voidWriteString(u8 *pu8string,u8 size);
void LCD_voidGotoXY(u8 x, u8 y);
void LCD_voidWriteNumber(u16 i);
#endif /* LCD_INTERFACE_H_ */
