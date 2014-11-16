/*
 * Square.cpp
 *
 *  Created on: 2014Äê11ÔÂ15ÈÕ
 *      Author: yibu
 */
#include <iostream>
#include "Square.h"
#include "string"
using namespace std;

void Square::draw()
{
	string star(_sideLength, '*');
	cout << endl;
	for (int r = 0; r < _sideLength; r++) {
		cout << star << endl;
	}
	cout << endl;
}
