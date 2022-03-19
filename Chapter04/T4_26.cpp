/*
 *FileName: T4_26.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 回文
 */

#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int y = x;
	int sum=0;
	while (y > 0)
	{
		sum = sum * 10 + y % 10;
		y = y / 10;
	}
	if (sum == x)
	{
		cout << "x是回文数" << endl;
	}
	else
	{
		cout << "不是回文数" << endl;
	}

	return 0;
}