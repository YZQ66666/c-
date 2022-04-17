/*
 *FileName: T6_29.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: ËØÊı
 */

int prime(int number);
int prime2(int number);
int prime3(int number);
int prime4(int number);
#include<iostream>
using namespace std;
int main()
{
	int number = 0;
	cin >> number;
	prime(number);
	for (int j = 2; j <= 10000; j++)
	{
		prime2(j);
		prime3(j);
		prime4(j);

	}

	return 0;
}
int prime(int number)
{
	for (int i = 2; i < number;i++)
	{
		if (number % i == 0)
		{
			cout << "isn't a prime" << endl;
		
			return 1;
		}
	}
	cout << "is a prime " << endl;
	
	return 0;
}

int prime2(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return 1;
		}
	}
	cout << number << "\t";

	return 0;
}

int prime3(int number)
{
	for (int i = 2; i < number/2; i++)
	{
		if (number % i == 0)
		{
			return 1;
		}
	}
	cout << number << "\t";

	return 0;
}

int prime4(int number)
{
	for (int i = 2; i <sqrt(number); i++)
	{
		if (number % i == 0)
		{
			return 1;
		}
	}
	cout << number << "\t";

	return 0;
}