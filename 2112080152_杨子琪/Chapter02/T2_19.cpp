/*
 *FileName: main.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 输入三个整数，输出和，平均数，乘积，最小值和最大值
 */

#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Input three different integers :";
	cin >> a >> b >> c;
	int x, y, z;
	x = a + b + c;
	y = (a + b + c) / 3;
	z = a * b * c;
	cout << "Sum is" << x << endl;
	cout << "Average is" << y << endl;
	cout << "Product is" << z << endl;
	int max = 0;
	int min = 1000;
	int arr[3] = { a,b,c };
	for (int i = 0; i <= 2; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int j = 0; j <= 2; j++)
	{
		if (arr[j] < min)
		{
			min = arr[j];
		}
	}
	cout << "Smallest is" << min << endl;
	cout << "Largest is" << max << endl;

	return 0;
}