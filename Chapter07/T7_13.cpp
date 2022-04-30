/*
 *FileName: T7_13.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 利用arr对象去重
 */

#include<iostream>
using namespace std;
int main()
{
	int arr[20] = { 0 };
	int number = 0;
	int time = 0;
	for (int i = 0; i < 20; i++)
	{
		cin >> number;
		for (int j = 0; j < 20; j++)
		{
			if (number == arr[j])
			{
				continue;
			}
			arr[time] = number;
			time++;
		}
	}
	cout << "出现过的数为" << endl;
	for (int k = 0; k < time; k++)
	{
		cout << arr[k] << endl;
	}
	return 0;
}