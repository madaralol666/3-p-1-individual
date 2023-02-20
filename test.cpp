#include "test.h"
#include <math.h>
#include <iostream>

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

int test::IcountMoney(int&, int&)
{
	return 0;
}
