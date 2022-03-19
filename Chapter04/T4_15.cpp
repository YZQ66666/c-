/*
 *FileName: T4_15.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 销售佣金计算器
 */

#include<iostream>
using namespace std;
int main()
{
	int n;//有n个销售员
	double basicsalary = 200;
	double sales;
	double salary;

	int i;
	while (i <= n)
	{
		cin >> sales;
		salary = sales * 0.09 + basicsalary;
		cout << "enter sales in dollars:" << sales << endl;
		cout << "Salary is:" << salary << endl;
		i++;
	}

	return 0;
}