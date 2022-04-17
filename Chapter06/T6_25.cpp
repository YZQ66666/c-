/*
 *FileName: T6_25.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 
 */

int Time(int hour, int min, int sec);
#include<iostream>
using namespace std;
int main()
{
	int hour = 0;
	int min = 0;
	int sec = 0;
	int sum = 0;
	cin >> hour >> min >> sec;
	cout << Time(hour, min, sec) << endl;
	
	return 0;
}
int Time(int hour, int min, int sec)
{
	int sum = 0;
	sum = hour * 3600 + min * 60 + sec;

	return sum;
}