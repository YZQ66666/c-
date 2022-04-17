/*
 *FileName: T6_26.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 摄氏温度和华氏温度
 */

int celsius(double F);
int fahrenheit(double C);
#include<iostream>
using namespace std;
int main()
{
	double C = 0;
	double F = 0;
	cin >> F;
	cin >> C;
	cout << celsius(F) << endl;
	cout << fahrenheit(C) << endl;
	for (int i = 0; i <= 100; i++)
	{
		cout << i << "\t" << fahrenheit(i) << endl;
	}
	for (int j = 32; j <= 212; j++)
	{
		cout << j << "\t" << celsius(j) << endl;
	}
	return 0;
}
int celsius(double F)
{
	double FC = 0;
	FC = (F - 32) * 5 / 9;
	return FC;
}
int fahrenheit(double C)
{
	double CF = 0;
	CF = C * 9 / 5 + 32;
	return CF;
}

