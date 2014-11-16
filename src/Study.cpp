/*
 * Study.cpp
 *
 *  Created on: 2014Äê11ÔÂ15ÈÕ
 *      Author: yibu
 */
#include <iostream>
#include "Study.h"
using namespace std;

bool isGreetingPos(int r, int c, int pad){
	return (r == pad + 1) &&( c == pad + 1);
}

bool isBandPos(int r, int c, int rows, int cols){
	return ((c == 0) || (c == cols - 1) || (r == 0) || (r == rows - 1));
}

bool isSpacePos(int r, int c, int pad){
	return ((r != 0) && (r != pad + 1) && (r != pad*2 +2) && (c == 1));
}

string getGeetingStr(){
	cout << "Enter your name:" << endl;
	string name;
	cin >> name;
	string greeting = "Hello, " + name + "!";
	return greeting;
}

int getPad(){
	cout << "Enter the number of space:" << endl;
	int pad;
	cin >> pad;
	return pad;
}

void greetingPrint(){
	string greeting = getGeetingStr();
	int pad = getPad();
	const int rows = pad *2 + 3;
    const string::size_type cols = pad*2 + greeting.size() + 2;
	string space(cols-2, ' ');

    cout << endl;

    for(int r=0; r<rows; r++){
    	string::size_type c = 0;
    	while(c != cols){
    		if(isGreetingPos(r,c,pad)){
    			cout << greeting;
    			c += greeting.size();
    		}
    		else
    		{
    			if(isBandPos(r, c, rows, cols)){
    				cout << '*';
    				c++;
    			}
    			else if(isSpacePos(r, c, pad)){
                    cout << space;
                    c += space.size();
    			}
    			else
    			{
    				cout << ' ';
    				c++;
    			}
    		}
    	}
    	cout << endl;
    }
    cout << endl;
	return;
}

void numCpm(int num1, int num2){
	cout << endl;
	if(num1 == num2){
		cout << "The first Num is equal to the second!";
	}
	else if(num1 > num2)
	{
		cout << "The first Num is bigger than the second!";
	}
	else
	{
		cout << "The first Num is smaller than the second!";
	}
	cout << endl;
}

