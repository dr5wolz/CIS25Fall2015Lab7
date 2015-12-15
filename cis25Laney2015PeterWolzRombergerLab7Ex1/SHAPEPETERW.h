/**
*Program Name: SHAPEPETERW.h
*Discussion:   Shapes
*Writen by:    Peter Wolz-Romberger
*Date:         2015/12/10
*/



#include "FRACTIONPETERW.h";
#include "POINTPETERW.h";
using namespace std;
#ifndef SHAPEPETERW_H
#define SHAPEPETERW_H

class Shape : public FractionPeterW {
public:
	virtual FractionPeterW getVolume() {
		return FractionPeterW(0,1);
	}

	virtual FractionPeterW getArea() = 0;
};

#endif
