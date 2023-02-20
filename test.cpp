#include "test.h"
#include <math.h>
#include <iostream>
using namespace std;

double test::PowDI(double &a, int &b)
{
	return pow(a, b);
}

double test::PowDD(double &a, double &b)
{
	return pow(a, b);
}

double test::DoubleInt(unsigned int &a, unsigned int &b)
{
	return b == 0 ? throw std::overflow_error("Divide by zero exception") :  a / b;
}

void test::IcountMoney(unsigned int&a, unsigned int&b)
{
	if (a && b >= 0)
	{
		int ArrayMoney[6]{ 50,100,500,1000,2000,5000 };
		for (int key : ArrayMoney)
			if (key == a)
				cout << a * b;
		cout << "Такой купюры нет";
	}
	else
	{
		cout << "ti chmo";
	}
}
