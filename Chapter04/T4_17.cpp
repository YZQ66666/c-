/*
 *FileName: T4_17.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: ÕÒ×î´óÊı
 */

#include<iostream>
using namespace std;
int main()
{
	int counter=1;
	int number;
	int largestest=0;
	int temp = 0;
	while (counter <= 10)
	{
		cin >> number;
		if (number >= largestest)
		{
			largestest = number;
			counter++;
		}
		else
		{
			counter++;
		}
	}
	cout << "largestest is:" << largestest << endl;
	return 0;
}