/*
 *FileName: T6_19.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 2nd,2022
 *College:  Henu University
 *Function: ֱ��������б�ߵļ���
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
	cout << "�������ߵĳ���Ϊ" << Hypotenuse(a, b) << endl;
	return 0;
}
int Hypotenuse(int a, int b)
{
	int c;
	c = sqrt(a * a + b * b);
	return c;
}