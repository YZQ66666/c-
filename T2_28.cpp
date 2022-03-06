/*
 *FileName: main.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 整数的各位数字
 */

#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int a, b, c, d, e;
	a = x % 10;
	b = x / 10 % 10;
	c = x / 100 % 10;
	d = x / 1000 % 10;
	e = x / 10000;
	cout << e << "   " << d << "   " << c << "   " << b << "   " << a << endl;

	return 0;
}