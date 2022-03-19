/*
 *FileName: T4_18.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 12th,2022
 *College:  Henu University
 *Function: ±í¸ñÊä³ö
 */

#include<iostream>
using namespace std;
int main()
{
	cout << "N" << "       " << "10*N" << "    " << "100*" << "    " << "1000*N" << endl;
	int i = 1;
	while (i <= 4)
	{
		cout << i << "\t" << i * 10 << "\t" << i * 100 << "\t" << i * 1000 << endl;
		i++;
	}
	return 0;
}