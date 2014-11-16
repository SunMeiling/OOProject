/*
 * Triangle.h
 *
 *  Created on: 2014Äê11ÔÂ16ÈÕ
 *      Author: yibu
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle
{
public:
	Triangle(int a, int b, int c):_a(a),_b(b),_c(c){
	}
	void draw();
private:
	int _a;
	int _b;
	int _c;
};

#endif /* TRIANGLE_H_ */
