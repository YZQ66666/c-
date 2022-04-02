/*
 *FileName: T5_22.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: 德摩根定律
 */

#include<iostream>
using namespace std;
int main()
{
	//a
	int x = 0;
	int y = 0;
	cin >> x >> y;
	if (!(x < 5) && !(y >= 7))
	{
		cout << "*****" << endl;
	}
	if (!((x < 5) || (y >= 7)))
	{
		cout << "*****" << endl;
	}
	//b
	int a = 0;
	int b = 0;
	int g = 0;
	cin >> a >> b;
	if (!(a == b) || !(g != 5))
	{
		cout << "%%%%%" << endl;
	}
	if (!((a == b) && (g != 5)))
	{
		cout << "%%%%%" << endl;
	}
	//c
	int x = 0;
	int y = 0;
	cin >> x >> y;
	if (!((x <= 8) && (y >= 4)))
	{
		cout << "#####" << endl;
	}
	if (!(x <= 8) && !(y >= 4))
	{
		cout << "#####" << endl;
	}
	
	//d
	int i = 0;
	int j = 0;
	cin >> i >> j;
	if (!((i > 4) || (i <= 6)))
	{
		cout << "$$$$$" << endl;
	}
	if (!(i > 4) && (i <= 6))
	{
		cout << "$$$$$" << endl;
	}


	return 0;
}