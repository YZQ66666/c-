/*
 *FileName: T5_23.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: 星号组成的菱形图案
 */


//只需要打印星号前面的空格和星号就可以了

#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 9; i++)  //一共九行
	{
		for (int j = 1; j <=5-i; j++) //打印上半星号前面的空格
		{
			cout << " ";
		}
		for (int j = 1; j <= i - 5; j++) //打印下半星号前面的空格
		{
			cout << " ";
		}
		for (int j = 1; (j <= 2 * i - 1) && (i <= 5); j++) // 打印上半星号
		{
			cout << "*";
		}
		for (int j = 1; (j <= 9 - 2 * (i - 5))&&(i>5);j++) //打印下半星号
		{
			cout<<"*";
		}
		cout << endl;
	}
	return 0;
}