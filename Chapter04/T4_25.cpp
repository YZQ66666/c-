/*
 *FileName: T4_25.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 12th,2022
 *College:  Henu University
 *Function: �Ǻ�������
 */

#include<iostream>
using namespace std;
int main()
{
	int x;//�����εı߳�
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		if (i == 1 || i == x)
		{
			for (int k = 1; k <= x; k++)
			{
				cout << "*";
			}
			cout << endl;
		}
		else
		{
			for (int j = 1; j <= x; j++)
			{
				if (j == 1 || j == x)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}