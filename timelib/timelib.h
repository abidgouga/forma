/*
 * timelib.h
 *
 *  Created on: Mar 14, 2021
 *      Author: GouGa
 */

#ifndef TIMELIB_H_
#define TIMELIB_H_
#include"tim.h"
#include"stdint.h"
void timelib_updatetimecount();

void timelib_init();
uint64_t timelib_return();
void timelib_printtime();
#endif /* TIMELIB_H_ */
