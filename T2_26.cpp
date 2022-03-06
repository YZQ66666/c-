/*
 *FileName: main.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: ∆Â≈ÃÕº∞∏
 */

#include<iostream>
using namespace std;
int main()
{
	//1.
	cout << "* * * * * * * * * * "<<endl;
	cout << " * * * * * * * * * *" << endl;
	cout << "* * * * * * * * * * " << endl;
	cout << " * * * * * * * * * *" << endl;
	cout << "* * * * * * * * * * " << endl;
	cout << " * * * * * * * * * *" << endl;
	cout << "* * * * * * * * * * " << endl;
	cout << " * * * * * * * * * *" << endl;

	//2.
	for (int i = 0; i <= 8; i++)
	{
		if (i % 2 == 0)
		{
			cout << "* * * * * * * * * * " << endl;
		}
		else
		{
			cout << " * * * * * * * * * *" << endl;
		}
	}

	return 0;
}