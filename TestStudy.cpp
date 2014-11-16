/*
 * TestPrint.cpp
 *
 *  Created on: 2014Äê11ÔÂ15ÈÕ
 *      Author: yibu
 */

#include "CppUTest/CommandLineTestRunner.h"
#include "Study.h"
TEST_GROUP(TestPrint)
{
	void setup(){

	}

	void teardown(){

	}
};


TEST(TestPrint, greeting_print_pad_2){
//    greetingPrint();
}

TEST(TestPrint, greeting_print_pad_0){
//    greetingPrint();
}

TEST(TestPrint, two_num_cmp_2_2){
	numCpm(2,2);
}

TEST(TestPrint, two_num_cmp_3_4){
	numCpm(3,4);
}

TEST(TestPrint, two_num_cmp_7_5){
	numCpm(7,5);
}

