/*
 * TestDrawPicture.cpp
 *
 *  Created on: 2014Äê11ÔÂ16ÈÕ
 *      Author: yibu
 */

#include "CppUTest/CommandLineTestRunner.h"
#include "Square.h"
#include "Rectangular.h"

TEST_GROUP(testDrawPicture)
{
	void setup(){

	}
	void teardown(){

	}
};

TEST(testDrawPicture, draw_suare_side_1)
{
	Square(1).draw();
}

TEST(testDrawPicture, draw_suare_side_4)
{
	Square(4).draw();
}

TEST(testDrawPicture, draw_rectangular_length_1_width_1)
{
	Rectangular(1,1).draw();
}

TEST(testDrawPicture, draw_rectangular_length_12_width_6)
{
	Rectangular(12,6).draw();
}

TEST(testDrawPicture, draw_triangle_side_3_3_3)
{

}
