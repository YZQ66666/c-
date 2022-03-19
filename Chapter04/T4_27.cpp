/*
 *FileName: T4_27.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 打印二进制数的十进制值
 */

#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int t = 1;
	int sum = 0;
	while (x)
	{
		if (x % 10 == 1)
		{
			sum = sum + t;
			t = t * 2;
			x = x / 10;
		}
	}
	cout << sum << endl;

	return 0;
}