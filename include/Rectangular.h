/*
 * Rectangular.h
 *
 *  Created on: 2014Äê11ÔÂ16ÈÕ
 *      Author: yibu
 */

#ifndef RECTANGULAR_H_
#define RECTANGULAR_H_

class Rectangular
{
public:
	Rectangular(int length, int width):_length(length),_width(width){
    }
	void draw();

private:
	int _length;
	int _width;
};
#endif /* RECTANGULAR_H_ */
