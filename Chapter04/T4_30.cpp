/*
 *FileName: T4_30.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 计算圆的直径周长和面积
 */

#include<iostream>
using namespace std;
int main()
{
	double r;
	cin >> r;
	double pai = 3.14159;
	cout << 2 * r << " " << 2 * pai * r << " " << pai * r * r << endl;
	return 0;
}