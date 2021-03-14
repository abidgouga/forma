/*
 * timelib.c
 *
 *  Created on: Mar 14, 2021
 *      Author: GouGa
 */
#include"stdint.h"
#include"tim.h"
#include"timelib.h"
#include"stdio.h"
static uint64_t timerow = 0 ;
void timelib_init(){
 HAL_TIM_Base_Start_IT( &htim6);
 HAL_TIM_Base_Start_IT( &htim7);
}
uint64_t timelib_return()
{
	return timerow;
}
timelib_printtime(){

	uint16_t ms=0;
	uint8_t s=0,m=0,h=0;
	ms=timerow%100;
	s=(timerow/100)%60;
	m=(timerow/6000)/60;
	h=(timerow/360000)/60;

	printf(" time :%.2u h  %.2u   %.2u  %.2u \n\r ",h,m,s,ms);
}
void timelib_updatetimecount()
{
	 timerow++;
}
