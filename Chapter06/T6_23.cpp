/*
 *FileName: T6_00.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 2nd,2022
 *College:  Henu University
 *Function: 任意符号组成的方形图案
 */


int Printsquare( char a , int side);
#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	int side = 0;
	cin >> side;
	
	Printsquare(a, side);

	return 0;
}
int Printsquare( char a , int side)
{
	for (int i = 1; i <= side; i++)
	{
		for (int j = 0; j <= side; j++)
		{
			cout << a;
		}
		cout << endl;
	}
	return 0;
}