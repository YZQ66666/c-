/*
 *FileName: T4_14.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 信用额度问题
 */

#include<iostream>
using namespace std;
int main()
{
	int n;  //有n个顾客
	int accountnumber=0;
	int beginningbalance=0;
	int totalcharges=0;
	int totalcredits=0;
	int creditlimits=0;

	int i = 1;
	while (i <= n)
	{
		cin >> accountnumber;

		cin >> beginningbalance;

		cin >> totalcharges;
		cin >> totalcredits;
		cin >> creditlimits;
		cout << "accountnumber :" << accountnumber << endl;
		cout << " beginningbalance:" << beginningbalance << endl;
		cout << "  totalcharges:" << totalcharges << endl;
		cout << "  totalcredits:" << totalcredits << endl;
		cout << " creditlimits :" << creditlimits << endl;
		if (beginningbalance + totalcharges - totalcredits > creditlimits)
		{
			cout << "new balance is" << beginningbalance - totalcredits << endl;
			cout << "account:" << accountnumber << endl;
			cout << "creditlimits :" << creditlimits << endl;
			cout << "balance" << beginningbalance + totalcredits << endl;
			cout << "Credit Limits Exceeded" << endl;
		}
		else
		{
			cout << "new balance is:" << beginningbalance - totalcredits << endl;
		}
		i++;

	} 
	

	return 0;
}