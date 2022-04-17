/*
 *FileName: T6_32.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: ³É¼¨µÄ¼¨µã
 */

int qualityPoints(int grade);
#include<iostream>
using namespace std;
int main()
{
	int grade = 0;
	cin >> grade;
	cout << qualityPoints(grade) << endl;
	return 0;
}	
int qualityPoints(int grade)
{
	if (grade >= 90 && grade <= 100)
	{
		return 4;
	}
	if (grade >= 80 && grade <= 89)
	{
		return 3;
	}
	if (grade >= 70 && grade <= 79)
	{
		return 2;
	}
	if (grade >= 60 && grade <= 69)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
