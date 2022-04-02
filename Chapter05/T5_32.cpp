/*
 *FileName: T5_32.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: FACEBOOK用户基数增长
 */

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	
	double amount = 0;
	double principal = 10;
	double rate = 0.05;  //rate 也可以为0.02 0.03 0.04
	int sum = 0;

	cout << fixed << setprecision(2);


	for (unsigned int year = 1; amount<=25; ++year)
	{
		amount = principal + pow(1.0 + rate, year);
		sum++;
	}
	cout << sum<<year<<endl;
	


	return 0;
}

