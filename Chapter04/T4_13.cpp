/*
 *FileName: T4_13.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 12th,2022
 *College:  Henu University
 *Function: ÆûÓÍÁ¨Êý
 */

#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	int n;
	cin >> n;
	int i = 0;
	double mile;
	double fuel;
	double sum1=0, sum2=0;
	while (i <= n)
	{
		cin >> mile >> fuel;
		
		cout <<setprecision(6)<<fixed<< mile / fuel << endl;
		i++;
		sum1 = sum1 + mile;
		sum2 = sum2 + fuel;
		cout << setprecision(6) << fixed << sum1 / sum2;
	}

	return 0;
}