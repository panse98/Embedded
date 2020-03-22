/*
 * KEYPAD_prog.c
 *
 *  Created on: Sep 7, 2019
 *      Author: hp
 */


#include "STD_TYPE.h"
#include "DIO_interface.h"
#include "KEYPAD_interface.h"
#define ROW_NB 4
#define COL_NB 4

u8 au8KeysNb[ROW_NB][COL_NB]={
		/*C0*/       /*C1*/      /*C2*/       /*C4*/
		{1,          2          ,3            ,4}, /*Row 0*/
		{5,          6,         7,              8}, /*row1*/
		{9,10,11,12},/*row2*/
		{13,14,15,16}/*row3*/

};
u8 KPD_u8GetPressedKey(void)
{
	u8 u8KeyNB_Loc;
	u8 u8RowIdx_Loc;
	u8 u8ColIdx_Loc;
DIO_Value enuPinValue_Loc=DIO_High;
// no3o by5od high w low mn l enum l 3mlto bta3 l dio value*/
for (u8ColIdx_Loc =0;u8ColIdx_Loc<COL_NB;u8ColIdx_Loc++)
{


	/*Activate Current Column*/
	DIO_voidsetPinValue(KPD_PORT,u8ColIdx_Loc,DIO_Low); // hn3rfo f l interface 3chan dh lazm l user yshofo*/
/*scan all Rows*/



		for (u8RowIdx_Loc=0;u8RowIdx_Loc<ROW_NB;u8RowIdx_Loc++)
		{
			enuPinValue_Loc=DIO_enuGetPinValue(KPD_PORT,u8RowIdx_Loc+COL_NB); /* l tawsela l columns l awl w b3den l rowa fa lazm ab2 3ad mn b3d l col*/
					// bt5od 2 parameters rkm l port w rkm l pin
			if (enuPinValue_Loc==DIO_Low)// hna krr nfso he checkd about the same condition inside the while and outside it
			{
				/*current row indicates that a key is pressed */
				u8KeyNB_Loc=au8KeysNb[u8RowIdx_Loc][u8ColIdx_Loc];
				while (enuPinValue_Loc==DIO_Low){

					enuPinValue_Loc=DIO_enuGetPinValue(KPD_PORT,u8RowIdx_Loc+COL_NB); // bw2f l software ld ma l ragl yshel edo*/
				}
		    }




		}
/*Deactivate Current Column*/
		DIO_voidsetPinValue(KPD_PORT,u8ColIdx_Loc,DIO_High);

	// lazm a deactivate l column abl ma an2l 3al b3do f a5r l for loop
	/* 3chan l ragl nykonsh das w hwa byn2l mn col l col f l loop fa mch hab2a 3arf hwa ara mn anhy col */
}
	/*Function REturns Key NB*/
	return u8KeyNB_Loc;

}
