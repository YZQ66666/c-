/*
 *FileName: T4_28.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: –«∫≈∆Â≈Ã ΩÕº∞∏
 */

#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 8; i++)
	{
		for (int j = 1; j <= 16; j++)
		{
			if (i % 2 == 1)
			{
				if (j % 2 == 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			else
			{
				if (j % 2 == 0)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}

		}
		cout << endl;
	}
	return 0;
}