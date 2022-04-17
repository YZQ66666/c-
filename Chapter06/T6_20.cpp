/*
 *FileName: T6_20.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 2nd,2022
 *College:  Henu University
 *Function: ±¶Êý
 */

int Multiple(int a, int b);
#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	Multiple(a, b);
	cout << Multiple(a, b) << endl;
	return 0;
}
int Multiple(int a, int b)
{
	bool x;
	if (a % b == 0)
	{
		x = true;
	}
	else
	{
		x = false;
	}
	return x;
}