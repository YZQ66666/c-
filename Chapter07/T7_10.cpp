/*
 *FileName: T7_10.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 销售人员薪金范围
 */

#include<iostream>
using namespace std;
int main()
{
	int arr[9] = { 0 };
	int n = 0;
	double number = 0;//number为销售额
	int sum = 0;//sum为总报酬
	cin >> n;//一共有n个员工
	for (int i = 1; i <= n; i++)
	{
		cin >> number;
		sum = 200 + 0.09 * number;
		if (sum <= 299 && sum >= 200)
		{
			arr[0]++;
		}
		if (sum <= 399 && sum >= 300)
		{
			arr[1]++;
		}
		if (sum <= 499 && sum >= 400)
		{
			arr[2]++;
		}
		if (sum <= 599 && sum >= 500)
		{
			arr[3]++;
		}
		if (sum <= 699 && sum >= 600)
		{
			arr[4]++;
		}
		if (sum <= 799 && sum >= 700)
		{
			arr[5]++;
		}
		if (sum <= 899 && sum >= 800)
		{
			arr[6]++;
		}
		if (sum <= 999 && sum >= 900)
		{
			arr[7]++;
		}
		if (sum >=1000)
		{
			arr[8]++;
		}
	}
	for (int i = 0; i <= 8; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}