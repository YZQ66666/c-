/*
 *FileName: T5_09.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: 奇整数的乘积
 */

#include<iostream>
using namespace std;
int main()
{
	int sum = 1;
	for (int i = 1; i <= 15; i++)
	{
		if (i % 2 == 1)
		{
			sum = sum * i;
		}
	}
	cout << sum << endl;
	return 0;
}