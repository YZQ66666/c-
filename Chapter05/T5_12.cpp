/*
 *FileName: T5_12.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: 使用嵌套的for循环绘制图案
 */

#include<iostream>
using namespace std;
int main()
{
	/*
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	int i = 1;
	int j = 1;

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 11 - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	int i = 10;
	int j = 1;
	

	for (int i = 10; i>=1; i--)
	{
		for (int j = 1; j<=10; j++)
		{
			if (j <= 10 - i)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}

	cout << endl;

	int i = i;
	int j = 1;
	*/
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (j <= 10 - i)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}
