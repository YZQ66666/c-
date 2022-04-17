/*
 *FileName: T6_42.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 两点之间的距离
 */

#include<iostream>
#include<cmath>
using namespace std;

int distance(double x1, double y1, double x2, double y2);
int main()
{
	double x1, y1, x2, y2=0;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << distance(x1, y1, x2, y2) << endl;
	return 0;
}
int distance(double x1, double y1, double x2, double y2)
{
	double distance;
	distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return distance;
}