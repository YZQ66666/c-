/*
 *FileName: T5_20.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: �ϴ����˹��Ԫ��
 */

#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 500; i++)
	{
		for (int j = 1; j <= 500; j++)
		{
			for (int k = 1; k <= 500; k++)
			{
				if (i * i + j * j == k * k)
				{
					cout << "һ����Ԫ��Ϊ:" << i << " " << j << " " << k << endl;
				}
			}
		}
	}
	return 0;
}