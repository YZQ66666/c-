/*
 *FileName: main.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 倍数
 */

#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a % b == 0)
	{
		cout << "a是b的倍数" << endl;
	}
	else
	{
		cout << "a不是b的倍数" << endl;
	}
	return 0;
}