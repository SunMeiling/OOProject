/*
 * Square.h
 *
 *  Created on: 2014��11��16��
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
