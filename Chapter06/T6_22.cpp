/*
 *FileName: T6_22.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 2nd,2022
 *College:  Henu University
 *Function: 星号组成的方形图案
 */

int Printsquare(int side);
#include<iostream>
using namespace std;
int main()
{
	int side=0;
	cin >> side;
	
	
	Printsquare(side);
	return 0;
}
int Printsquare(int side)
{
	for (int i = 1; i <= side; i++)
	{
		for (int j = 0; j <= side; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}