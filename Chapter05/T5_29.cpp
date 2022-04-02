/*
 *FileName: T5_00.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: 彼得.米纽伊特问题
 */

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double amount=0;
	double principal = 24;
	double rate = 0.05;
	cout << "Year" << setw(21) << "Amount on deposit" << endl;

	cout << fixed << setprecision(2);

	
		for ( unsigned int year = 1; year <= 387; ++year)
		{
			amount = principal + pow(1.0 + rate, year);
			cout << setw(4) << year << setw(21) << amount << endl;
			rate = rate * 2;
		}
	
	
	

	return 0;
}
