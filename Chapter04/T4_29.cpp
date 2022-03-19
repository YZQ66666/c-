/*
 *FileName: T4_29.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 无限循环2的倍数
 */

#include<iostream>
using namespace std;
int main()
{
	bool a = true;
	long long b = 2;
	while (a)
	{
		cout << b << " ";
		b = b * 2;
	}

	return 0;
}