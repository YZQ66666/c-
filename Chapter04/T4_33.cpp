/*
 *FileName: T4_33.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: ֱ�������εı�
 */

#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > 0 && b > 0 && c > 0)
	{
		if (a + b > c && b + c > a && a + c > b)
		{
			if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			{
				cout << "�ܹ���ֱ��������" << endl;
			}
			else
			{
				cout << "���ܹ���ֱ��������" << endl;
			}
		}
		else
		{
			cout << "���ܹ���ֱ��������" << endl;
		}
	}
	else
	{
		cout << "���ܹ���ֱ��������" << endl;
	}
	return 0;
}