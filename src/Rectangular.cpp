#include "Rectangular.h"
#include "string"
#include <iostream>

using namespace std;

void Rectangular::draw() {
	string star(_width, '*');
	cout << endl;
	for(int r=0; r<_length; r++){
		cout << star << endl;
	}
	cout << endl;
}
