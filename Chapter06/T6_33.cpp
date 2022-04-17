/*
 *FileName: T6_33.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: Å×Ó²±Ò
 */


#include<iostream>
#include<random>
#include<iomanip>
#include<ctime>
using namespace std;

int flip(int x);
int main()
{
	int x = 0;
	int a = 0;
	int b = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (flip(x) == 1)
		{
			a++;
		}
		else
		{
			b++;
		}
		
	}
	cout << "a=" << a << " " << "b=" << b << endl;
	return 0;
}
int flip(int x)
{
	default_random_engine engine(static_cast<unsigned int>(time(0)));
	uniform_int_distribution<unsigned int>randomInt(1, 2);
	int x = randomInt(engine);
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}