/*
 *FileName: T6_19.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 2nd,2022
 *College:  Henu University
 *Function: 直角三角形斜边的计算
 */

int Hypotenuse(int a, int b);

#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cin >> a >> b;
	Hypotenuse(a, b);
	cout << "第三条边的长度为" << Hypotenuse(a, b) << endl;
	return 0;
}
int Hypotenuse(int a, int b)
{
	int c;
	c = sqrt(a * a + b * b);
	return c;
}