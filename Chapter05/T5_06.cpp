/*
 *FileName: T5_06.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 整数求平均数
 */

#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int n = 0;
	int a=0;
	while (a != 9999)
	{
		cin >> a;
		sum = sum + a;
		n++;
	}
	cout << (sum - 9999) / (n - 1) << endl;

	return 0;
}