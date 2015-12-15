/**
 *Program Name: cis25Fall2015PeterWolzRombergerLab7Ex1.cpp
 *Discussion:	Shapes
 *Writen by:    Peter Wolz-Romberger
 *Date:         2015/11/22
 */

#include <iostream>
using namespace std;
#include "FRACTIONPETERW.H"
#include "UTILITIES.H"
#include "POINTPETERW.H"
#include "SHAPEPETERW.h"
#include "RECTANGLEPETERW.h"

void mainMenu(void);

int main() {



	return 0;
}


void mainMenu() {

	int menuChoice;
	PointPeterW* mainPoint = nullptr;
	int initalizeCheck = 0;

	do {
		cout << "\n*******************\n"
			<< "*   MENU Point    *\n"
			<< "* 1. Initializing *\n"
			<< "* 2. Moving       *\n"
			<< "* 3. Flipping     *\n"
			<< "* 4. Printing     *\n"
			<< "* 5. Quit         *\n"
			<< "*******************\n";

		cout << "Select an option (use integer value only): ";
		cin >> menuChoice;
		cout << endl;

		switch (menuChoice) {
		case 1: cout << "  Initializing Option --\n";
			initalizeCheck = initializing(&mainPoint);
			break;
		case 2: cout << "  Moving Option --\n";
			if (initalizeCheck == 1) {
				movingMenu(mainPoint);
			}
			else {
				cout << "\n    Not a proper call as no Point are available!\n";
			}
			break;
		case 3: cout << "  Flipping Option --\n";
			if (initalizeCheck == 1) {
				flippingMenu(mainPoint);
			}
			else {
				cout << "\n    Not a proper call as no Points are available!\n";
			}
			break;
		case 4: cout << "  Printing Point: \n  ";
			if (initalizeCheck == 1) {
				cout << *mainPoint << endl;
			}
			else {
				cout << "\n    Not a proper call as no Points are available!\n";
			}
			break;
		case 5: cout << "  Having Fun ...\n";
			break;
		default:
			cout << "WRONG OPTION!\n";
			break;
		}

	} while (menuChoice != 5);

}


/* PROGRAM OUTPUT

*/

/* COMMENTS ON Code/Output

*/