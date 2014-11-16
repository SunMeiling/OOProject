/*
 * Square.h
 *
 *  Created on: 2014Äê11ÔÂ16ÈÕ
 *      Author: yibu
 */

#ifndef SQUARE_H_
#define SQUARE_H_


class Square
{
public:
	Square(int sideLength):_sideLength(sideLength){
	}
	void draw();
private:
	int _sideLength;
};


#endif /* SQUARE_H_ */
