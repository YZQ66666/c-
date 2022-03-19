/*
 *FileName: T4_16.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 12th,2022
 *College:  Henu University
 *Function: 薪金计算器
 */

#include<iostream>
using namespace std;
int main()
{
	int hours;
	int salaryhour=10;
	double salary;
	int n;
	cin >> n;//n个员工

	int i = 1;
	while (i <= n)
	{
		cin >> hours;
		if (hours <= 40)
		{
			salary = salaryhour * hours;
			cout << "enter hours worked:" << hours << endl;
			cout << "enter hourly rate of the employee:" << salaryhour << endl;
			cout << "Salary is:" << salary << endl;
		}
		else
		{
			salary = 40 * salaryhour + (hours - 40) * 1.5 * salaryhour;
			cout << "enter hours worked:" << hours << endl;
			cout << "enter hourly rate of the employee:" << salaryhour << endl;
			cout << "Salary is:" << salary << endl;
		}
		i++;
	}


	return 0;
}