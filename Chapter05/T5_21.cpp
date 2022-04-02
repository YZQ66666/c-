/*
 *FileName: T5_21.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: 薪金计算
 */

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double sum;
	double a;//经理的固定工资
	double b;//小时工的工作小时
	double c;//小时工的固定每小时工资
	double d;//每月的销售毛利
	double e;//计件工生产的产品个数
	double f;//每生产一个产品的金额
	int choice=1;//choice为1表示要查看工资
	
	while (choice)
	{
		switch (n)
		{
		case 1:
			cin >> a;
			sum = a;
			cout << sum << endl;
			break;

		case 2:
			cin >> c;
			cin >> b;
			if (b < 40)
			{
				sum = b * c;
			}
			else
			{
				sum = 40 * c + (b - 40) * 1.5 * c;
			}
			cout << sum << endl;
			break;

		case 3:
			cin >> d;
			sum = 250 + 0.057 * d;
			cout << sum << endl;
			break;

		case 4:
			cin >> e;
			cin >> f;
			sum = e * f;
			cout << sum << endl;
		}
		cin >> choice;
	}
	return 0;
}