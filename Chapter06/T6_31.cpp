/*
 *FileName: T6_31.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 最大公约数
 */

int gcd(int a, int b);
#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	return 0;
}
int gcd(int a, int b)
{
	int c;
	int j = 0;
	if (a > b)
	{
		c = b;
	}
	else
	{
		c = a;
	}
	int x = 0;
	int arr[9999] = { 0 };
	for (int i = 1; i <= c; i++)
	{
		
		if (a % i == 0 && b % i == 0)
		{
			arr[j] = i;
			j++;
		}
	}
	int temp = 0;
	for (int m = 0; m < j-1; m++)
	{
		for (int n = 0; n < j - 1 - m; n++)
		{
			if (arr[n] < arr[n + 1])
			{
				temp = arr[n];
				arr[n] = arr[n + 1];
				arr[n + 1] = temp;
			}
		}
	}
	return arr[0];
}
