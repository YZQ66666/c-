/*
 *FileName: main.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 圆的直径，周长和面积
 */

#include<iostream>
using namespace std;
int main()
{
	int r;
	cin >> r;
	int R;
	int C;
	int S;
	R = 2*r;
	C = 2 * 3.14159 * r;
	S = 3.14159 * r * r;
	cout << R << endl << C << endl << S << endl;
	return 0;
}