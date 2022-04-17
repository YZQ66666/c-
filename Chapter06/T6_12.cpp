/*
 *FileName: T6_12.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: Í£³µ·Ñ
 */

#include<iostream>
using namespace std;

int main()
{
	double hour1 = 0;
	double hour2 = 0;
	double hour3 = 0;
	double charge1 = 2;
	double charge2 = 2;
	double charge3 = 2;
	int x = 0;
	cin >> hour1 >> hour2 >> hour3;
	cout << "Car\t" << "Hours\t" << "Charge" << endl;
	
	if (hour1 > 3)
	{
		x = hour1 * 10;
		if ( x % 10 == 0)
		{
			charge1 = charge1 + (hour1 - 3) * 0.50;
			if (charge1 >= 10)
			{
				cout << "1\t" << hour1<<"\t" << "10" << endl;
			}
			else
			{
				cout << "1\t" << hour1<<"\t" << charge1 << endl;
			}
		}
		else
		{
			charge1 = charge1 + (x / 10 + 1) * 0.50;
			if (charge1 >= 10)
			{
				cout << "1\t" << hour1<<"\t" << "10" << endl;
			}
			else
			{
				cout << "1\t" << hour1<<"\t" << charge1<< endl;
			}
		}
	}
	else
	{
		cout << "1\t" << hour1<<"\t" << "2.00" << endl;
	}


	if (hour2 > 3)
	{
		x = hour2 * 10;
		if (x % 10 == 0)
		{
			charge2 = charge2 + (hour2 - 3) * 0.50;
			if (charge2 >= 10)
			{
				cout << "2\t" << hour2<<"\t" << "10" << endl;
			}
			else
			{
				cout << "2\t" << hour2<<"\t" << charge2 << endl;
			}
		}
		else
		{
			charge2 = charge2 + (x / 10 + 1) * 0.50;
			if (charge2 >= 10)
			{
				cout << "2\t" << hour2<<"\t" << "10" << endl;
			}
			else
			{
				cout << "2\t" << hour2<<"\t" << charge2<< endl;
			}
		}
	}
	else
	{
		cout << "2\t" << hour2<<"\t" << "2.00" << endl;
	}



	if (hour3 > 3)
	{
		x = hour3 * 10;
		if (x % 10 == 0)
		{
			charge3 = charge3 + (hour3 - 3) * 0.50;
			if (charge3 >= 10)
			{
				cout << "3\t" << hour3<<"\t" << "10" << endl;
			}
			else
			{
				cout << "3\t" << hour3<<"\t" << charge3 << endl;
			}
		}
		else
		{
			charge3 = charge3 + (x / 10 + 1) * 0.50;
			if (charge3 >= 10)
			{
				cout << "3\t" << hour3<<"\t" << "10" << endl;
			}
			else
			{
				cout << "3\t" << hour3<<"\t" << charge3 << endl;
			}
		}
	}
	else
	{
		cout << "3\t" << hour3<<"\t" << "2.00" << endl;
	}
	cout << "TOTAL\t" << hour1 + hour2 + hour3 << "\t" << charge1 + charge2 + charge3 << endl;
	return 0;
}


