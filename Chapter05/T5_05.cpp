/*
 *FileName: T5_05.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 整数求和
 */

#include<iostream>
using namespace std;
int main()
{
	int n;  //输入n个数
	cin >> n;
	int a;
	int sum=0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		sum = sum + a;
	}
	cout << sum << endl;
	return 0;
}