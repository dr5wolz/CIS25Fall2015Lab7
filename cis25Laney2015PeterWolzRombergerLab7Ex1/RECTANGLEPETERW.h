/**
*Program Name: RECTANGLEPETERW.h
*Discussion:   Rectangles
*Writen by:    Peter Wolz-Romberger
*Date:         2015/12/10
*/


#include "FRACTIONPETERW.h";
#include "POINTPETERW.h";
#include "SHAPEPETERW.h";

using namespace std;
#ifndef RECTANGLEPETERW_H
#define RECTANGLEPETERW_H

class RectanglePeterW : public Shape {
public:

	//base constructors and destructors
	RectanglePeterW();
	RectanglePeterW(const PointPeterW&, const PointPeterW&);
	RectanglePeterW(const RectanglePeterW&);
	~RectanglePeterW();

	// Data From Rectangle
	FractionPeterW getArea() override;

	// Print Options
	friend ostream& operator<<(ostream&, const RectanglePeterW&);

	// checking values
	void check(RectanglePeterW&);

	// overloading Operators
	RectanglePeterW& operator=(const RectanglePeterW&);

private:
	PointPeterW ur;
	PointPeterW ll;
};

#endif
