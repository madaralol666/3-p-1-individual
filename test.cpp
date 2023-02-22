#include "test.h"
#include <math.h>
#include <ctime>
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

void test::DoubleInt(int &a, int &b)
{
	a && b < 0 && b == 0 ? cout << "Divide by zero exception/negative numbers": cout << a / b;
}

void test::CountProduct(int& a, int& b)
{
	a && b > 0 ? cout << a * b : cout << "Products/Value cannot be negative";
}


void test::IcountMoney(int&a, int&b)
{
	if (a && b >= 0)
	{
		int ArrayMoney[6]{ 50,100,500,1000,2000,5000 };
		for (int key : ArrayMoney)
			if (key == a)
			{
				cout << a * b;
				break;
			}
			else
			{
				cout << "Такой купюры нет";
				break;
			}
	}
	else
		cout << "Negative money???";
}

void test::CountCCal(int&a, double&b)
{
	a && b > 0 ? cout << a * b * 10: cout << "ты баран";
}

bool test::Diapason(double&a, double&b, double&c)
{
	return c > a && c < b ? true : false;
}

bool test::DiapasonPlus(double&a, double&b, double&c)
{
	return c >= a && c < b ? true : false;
}

void test::Timepuk(int&a, int&b)
{
	a && b > 0 ? cout << a * 60 + b : cout << "Ты баран";
}

double test::CalcXY(double&a, double&b)
{
	return sqrt(pow(a, 2) + pow(b, 2));
}

void test::CalcSalary(double&a, int&b)
{
	cout << "Зарплата: " << a / 22 * b;
}
void test::CalcPhoneCall(double&a, double&b)
{
	cout << a * b;
}
void test::DoubleMultiply(double&a, double&b, double &c)
{
	b > 0 ? cout << (a + b) * c : cout << "Неверный формат";
}
void test::PositiveNumber(int &a)
{
	while (!(cin >> a) || a < 0)
	{	
		cout << "Ты баран, почитай тз" << endl;
		cin.clear();
		while (cin.get() != '\n');
	};
}
void test::PositiveNumber(double& a)
{
	while (!(cin >> a) || a < 0)
	{
		cout << "Ты баран, почитай тз" << endl;
		cin.clear();
		while (cin.get() != '\n');
	};
}
void test::PositiveNumber(unsigned int& a)
{
	while (!(cin >> a) || a < 0)
	{
		cout << "Ты баран, почитай тз" << endl;
		cin.clear();
		while (cin.get() != '\n');
	};
}
