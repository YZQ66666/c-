/*
 *FileName: T6_00.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 2nd,2022
 *College:  Henu University
 *Function:
 */

#include<iostream>
#include<cmath>
using namespace std;
int RoundToInteger(int number);
int RoundToTenths(int number);
int RoundToHundredths(int number);
int RoundToThousandths(int number);

int main()
{
	int number = 0;
	int y = 0;
	int choice = 1;
	while (choice)
	{
		cin >> number;
		cout << number << "\t" << RoundToInteger(y) << "\t" << RoundToTenths(y) << "\t" << RoundToHundredths(y) << "\t"
			<< RoundToThousandths(y) << endl;
		cin >> choice;
	}
	return 0;
}

