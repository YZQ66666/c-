/*
 *FileName: main.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 输入两个整数，输出较大的数
 */

#include<iostream>
using namespace std;
int main()
{
	int a, b;
	if (a > b)
	{
		cout << "a is large" << endl;
	}
	else if (b > a)
	{
		cout << "b is large" <<endl;
	}
	else
	{
		cout << "These numbers are equal" << endl;
	}
	return 0;
}