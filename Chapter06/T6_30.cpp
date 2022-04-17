/*
 *FileName: T6_30.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: Êý×Ö·´Ïò
 */

int reverse(int number);
#include<iostream>
using namespace std;
int main()
{
	int number = 0;
	cin >> number;
	int x = 0;
	if (number < 0)
	{
		number = -number;
		x = 1;
	}
	if (x == 0)
	{
		cout << reverse(number) << endl;
	}
	else
	{
		cout<<"-" << reverse(number) << endl;
	}
	return 0;
}
int reverse(int number)
{
	
	int sum = 0;
	while (number)
	{
		sum = sum * 10 + number % 10;
		number = number / 10;
	}
	return sum;

}
