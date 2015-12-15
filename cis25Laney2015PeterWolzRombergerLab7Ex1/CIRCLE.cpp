/**
*Program Name: CIRCLEPETERW.h
*Discussion:   Rectangle
*Writen by:    Peter Wolz-Romberger
*Date:         2015/12/10
*/

#include <iostream>
using namespace std;
#include "FRACTIONPETERW.H"
#include "UTILITIES.H"
#include "POINTPETERW.H"
#include "SHAPEPETERW.h"
#include "CIRCLEPETERW.h"

CirclePeterW::CirclePeterW() {
	center = PointPeterW(FractionPeterW(1, 1), FractionPeterW(1, 1));
	r = FractionPeterW(1, 1);
	cout << "calling Circle()\n";
}

CirclePeterW::CirclePeterW(const PointPeterW& in1, const FractionPeterW& in2) {
	center = in1;
	r = in2;
	check(*this);
	cout << "calling Circle()\n";
}

CirclePeterW::CirclePeterW(const CirclePeterW& in) {
	center = in.center;
	r = in.r;
	cout << "calling Circle()\n";
}

CirclePeterW::~CirclePeterW() {
	cout << "calling ~Circle()\n";
}

void CirclePeterW::check(CirclePeterW& in) {
	if (FractionPeterW(0, 1) > in.r) {
		cout << "    RADIUS CANNOT BE =< 0 RADIUS SET TO 1\n";
		in.r = FractionPeterW(1, 1);
	}
}

CirclePeterW& CirclePeterW::operator=(const CirclePeterW& in) {
	center = in.center;
	r = in.r;
	return *this;
}

ostream& operator<<(ostream& out, const CirclePeterW& in) {
	out << "Circle has a center of " << in.center << " and a radius of " << in.r;
	return out;
}

FractionPeterW CirclePeterW::getArea() {
	return FractionPeterW(r.getNum() * r.getNum() * 157, r.getDenom() * r.getDenom() * 50);
}