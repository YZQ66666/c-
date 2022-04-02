/*
 *FileName: T5_08.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 找最小整数
 */

#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int min = 0;
	int a;
	cin >> a;
	min = a;
	for (int i = 1; i <= n - 1; i++)
	{
		cin >> a;
		if (a < min)
		{
			min = a;
		}
	}
	cout << min << endl;
	return 0;
}