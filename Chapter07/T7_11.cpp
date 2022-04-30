/*
 *FileName: T7_11.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function:
 */

#include<iostream>
using namespace std;
int main()
{
	int counts[10] = { 0 };
	int bonus[15] = { 0 };
	for (int i = 0; i < 15; i++)
	{
		bonus[i]++;
	}
	double monthlyTemperatures[] = { 0 };
	
	for (int j = 0; j <= 12; j++)
	{
		cin >> monthlyTemperatures[j];
	}
	int bestScores[5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		cout << bestScores[i] << endl;
	}

	return 0;
}