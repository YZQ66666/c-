/*
 *FileName: T6_00.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 2nd,2022
 *College:  Henu University
 *Function: Êý×Ö·ÖÀë
 */

int Function1(int a, int b);
int Function2(int a, int b);
int Function3(int x);

#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int x=0;

	cin >> a >> b;
	cin >> x;
	Function1( a ,b );
	cout << Function1(a, b) << endl;
	cout << Function2(a, b) << endl;
	
	Function3(x);

	return 0;
}
int Function1(int a, int b)
{
	int m = 0;
	m = a / b;
	return m;
}

int Function2(int a, int b)
{
	int n = 0;
	n = a % b;
	return n;
}

int Function3(int x)
{
	int y = 0;
	while (x)
	{
		y = x % 10;
		cout << y << " ";
		x = x / 10;	
	}
	return 0;
}
