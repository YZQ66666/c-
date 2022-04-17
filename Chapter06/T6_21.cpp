/*
 *FileName: T6_21.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 2nd,2022
 *College:  Henu University
 *Function: Å¼Êý
 */

int Iseven(int x);
#include<iostream>
using namespace std;
int main()
{
	int x=0;
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		Iseven(x);
		if ((Iseven(x)) == 1)
		{
			cout<<"true"<<endl;
		}
		else
		{
			cout << "false" << endl;
		}
	}
	return 0;
}
int Iseven(int x)
{
	bool b;
	if (x % 2 == 0)
	{
		b = true;
	}
	else
	{
		b = false;
	}
	return b;
}