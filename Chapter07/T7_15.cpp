/*
 *FileName: T7_15.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 二维arr对象初始化
 */

#include<iostream>
using namespace std;
int main()
{
	int sales[3][5];
	for (size_t row = 0; row < sales.size(); ++row)
	{
		for (size_t column = 0; column < sales[row].size(); ++column)
		{
			sales[row][column] = 0;
		}
	}
	return 0;
}
