/*
 *FileName: T4_32.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: �����εı�
 */

#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > 0 && b > 0 && c > 0)
	{
		if (a + b > c && a + c > b && b + c > a)
		{
			cout << "�ܹ���������" << endl;
		}
		else
		{
			cout << " ���ܹ���������" << endl;
		}
	}
	else
	{
		cout << "���ܹ���������" << endl;
	}
	return 0;
}