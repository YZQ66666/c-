/*
 *FileName: T5_19.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: ÇópaiµÄÖµ
 */

#include<iostream>
using namespace std;
int main()
{
	double sum = 0;
	for (int i = 1; i <= 1000; i++)
	{
		cout << i<<"\t";
		if (i % 2 == 0)
		{
			sum = sum - 4 / (2 * double(i) - 1);
			cout << sum << endl;
		}
		else
		{
			sum = sum + 4 / (2 * double(i) - 1);
			cout << sum << endl;
		}
	}
	return 0;
}