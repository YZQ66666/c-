/*
 *FileName: T5_10.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: ½×³Ë
 */

#include<iostream>
using namespace std;
int main()
{
	int sum = 1;
	int k;
	for (int j = 1; j <= 5; j++)
	{
		cout << j<<"\t" ;
	}
	cout << endl;
	for (int i = 1; i <= 5; i++)
	{
		sum = 1;
		k = i;
		while (k > 0)
		{
			sum = sum * k;
			k--;
		}
		cout << sum << "\t";
	}
	
	return 0;
}