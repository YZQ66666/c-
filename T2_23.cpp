/*
 *FileName: main.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 最大和最小整数
 */

#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int arr[5] = { a,b,c,d,e };

	//开始冒泡排序
		//总共排序轮数为 元素个数-1
	for (int i = 0; i < 5 - 1; i++)
	{
		//内层循环对比次数=元素个数-当前轮数-1
		for (int j = 0; j < 5 - i - 1; j++)
		{
			//如果第一个数字比第二个数字大，交换两个数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "max=" << arr[0] << endl;
	cout << "min=" << arr[4] << endl;

	return 0;
}