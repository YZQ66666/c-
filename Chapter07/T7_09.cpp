/*
 *FileName: T7_09.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 二维arr对象的问题
 */

#include<iostream>
using namespace std;
int main()
{
	int t[2][3];
	//2行 3列 6个元素
	for (int i = 0; i < 3; i++)
	{
		cout << "t[1]["<< i<<"]" << endl;
	}
	for (int j = 0; j < 2; j++)
	{
		cout << "t["<<j << "][2]" << endl;
	}
	int t[1][2] = { 0 };
	int t[1][2] = { 0 };
	int a;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a;
			t[i][j] = a;
		}
	}
	int min = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (t[i][j] < min)
			{
				min = t[i][j];
			}
		}
	}
	cout << "min=" << min << endl;
	for (int k = 0; k < 2; k++)
	{
		cout << t[1][k] << endl;
	}
	for (int k = 0; k < 3; k++)
	{
		cout << t[k][2] << endl;
	}
	
	return 0;
}