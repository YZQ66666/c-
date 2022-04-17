/*
 *FileName: T6_28.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: ÍêÊı
 */

int isperfect(int number);
#include<iostream>
using namespace std;
int main()
{
	int number = 0;
	cin >> number;
	cout << isperfect(number) << endl;
	return 0;
}
int isperfect(int number)
{
	bool n;
	int sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			sum = sum + i;
		}
	}
	if (sum == number)
	{
		n = true;
	}
	else
	{
		n = false;
	}
	return n;
}