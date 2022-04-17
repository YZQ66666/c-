/*
 *FileName: T6_13.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 2nd,2022
 *College:  Henu University
 *Function: 数的整数舍入
 */


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int choice = 1;
	double x=0;
	int y = 0;
	while (choice ==1)
	{
		cin >> x;
		y = floor(x + 0.5);
		cout << x << "\t" << y << endl;
		cin >> choice;
	}

	return 0;
}
