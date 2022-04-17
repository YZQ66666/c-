/*
 *FileName: T6_37.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 斐波那锲数列的迭代版本
 */

#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int sum = 0;
	if (n > 0 && n <= 2)
	{
		cout << "1" << endl;
	}
	else
	{
		int a = 1;
		int b = 1;
		for (int i = 3; i <= n; i++)
		{
			sum = a + b;
			a = b;
			b = sum;
		}
	}
	cout << sum << endl;
	return 0;
}
