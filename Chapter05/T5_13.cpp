/*
 *FileName: T5_13.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: Ãı–ŒÕº
 */

#include<iostream>
using namespace std;
int main()
{
	int x;
	for (int i = 1; i <= 5; i++)
	{
		cin >> x;
		for (int j = 1; j <= x; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}