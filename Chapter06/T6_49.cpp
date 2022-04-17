/*
 *FileName: T6_49.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 圆面积的计算
 */

int area(int r);
#include<iostream>
using namespace std;
int main()
{
	int r = 0;
	cin >> r;
	cout << area(r) << endl;
	return 0;
}
int area(int r)
{
	double area = 0;
	area = 3.14 * r * r;
	return area;
}