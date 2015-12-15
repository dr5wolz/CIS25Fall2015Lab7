/**
*Program Name: CIRCLEPETERW.h
*Discussion:   Circle
*Writen by:    Peter Wolz-Romberger
*Date:         2015/12/10
*/



#include "FRACTIONPETERW.h";
#include "POINTPETERW.h";
#include "SHAPEPETERW.h";

using namespace std;
#ifndef CIRCLEPETERW_H
#define CIRCLEPETERW_H

class CirclePeterW : public Shape {
public:

	//base constructors and destructors
	CirclePeterW();
	CirclePeterW(const PointPeterW&, const FractionPeterW&);
	CirclePeterW(const CirclePeterW&);
	~CirclePeterW();

	// Data From Rectangle
	FractionPeterW getArea() override;

	// Print Options
	friend ostream& operator<<(ostream&, const CirclePeterW&);

	// checking values
	void check(CirclePeterW&);

	// overloading Operators
	CirclePeterW& operator=(const CirclePeterW&);

private:
	PointPeterW center;
	FractionPeterW r;
};

#endif