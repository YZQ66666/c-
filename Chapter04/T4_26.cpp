/*
 *FileName: T4_26.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: ����
 */

#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int y = x;
	int sum=0;
	while (y > 0)
	{
		sum = sum * 10 + y % 10;
		y = y / 10;
	}
	if (sum == x)
	{
		cout << "x�ǻ�����" << endl;
	}
	else
	{
		cout << "���ǻ�����" << endl;
	}

	return 0;
}