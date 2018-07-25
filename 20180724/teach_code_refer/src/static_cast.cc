 ///
 /// @file    static_cast.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-07-24 14:53:04
 ///
 
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;

void test0(void)
{
	int a = 10;
	double d1 = (double)a;
	double d2 = double(a);
	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;
}

void test1(void)
{
	int a = 10;
	double d1 = static_cast<double>(a);
	cout << "d1 = " << d1 << endl;

	int * p = static_cast<int*>(malloc(sizeof(int)));
	*p = 10;

	//static_cast/const_cast/dynamic_cast/reinterpret_cast
}
 
int main(void)
{
	test1();

	return 0;
}
