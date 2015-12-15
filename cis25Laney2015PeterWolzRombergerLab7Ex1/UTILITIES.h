/**
*Program Name:	UTILITIES.h
*Discussion:	Shapes
*Writen by:		Peter Wolz-Romberger
*Date:			2015/12/10
*/

#include <iostream>
using namespace std;
#include "FRACTIONPETERW.H"
#include "POINTPETERW.H"
#include "SHAPEPETERW.h"
#include "RECTANGLEPETERW.h"
#include "CIRCLEPETERW.h"

#ifndef UTILITIES_H
#define UTILITIES_H

void displayClassInfoPeterWolzRomberger(void);
int rectangleMenu(RectanglePeterW**, RectanglePeterW**);
int circleMenu(CirclePeterW**, CirclePeterW**);
void mixedMenu(RectanglePeterW*, RectanglePeterW*, CirclePeterW*, CirclePeterW*);
void initialize(RectanglePeterW**);
void initialize(CirclePeterW**);

#endif
