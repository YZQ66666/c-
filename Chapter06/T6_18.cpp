/*
 *FileName: T6_18.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 2nd,2022
 *College:  Henu University
 *Function: «Û√›º∆À„
 */

int IntegerPower(int base, int exponent);
#include<iostream>
using namespace std;
int main()
{
	
	int base=0;
	int exponent = 0;
	cin >> base >> exponent;
	IntegerPower(base, exponent);
	cout << IntegerPower(base, exponent) << endl;

	return 0;
}
int IntegerPower(int base, int exponent)
{
	int sum = 1;
	for (int i = 1; i <= exponent; i++)
	{
		sum = sum * base;
	}
	return sum;
}