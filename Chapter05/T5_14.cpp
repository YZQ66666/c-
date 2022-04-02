/*
 *FileName: T5_14.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: 计算总销量
 */

#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	double b, c, d, e, f;
	double sum;
	cin >> a;
	while (a)
	{
		switch (a)
		{
		case 1:cin >> b;
			sum = 2.98*b + sum;
			break;
		case 2:cin >> c;
			sum = sum + 4.50*c;
			break;
		case 3:cin >> d;
			sum = sum + 9.98 * d;
			break;
		case 4:cin >> e;
			sum + sum + 4.49 * e;
			break;
		case 5:cin >> f;
			sum + sum + 6.87 * f;

		}
		cin >> a;


	}
	cout << sum << endl;
	return 0;
}