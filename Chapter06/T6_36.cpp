/*
 *FileName: T6_00.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: µ›πÈµƒ«Û√›‘ÀÀ„
 */

#include <iostream>
using namespace std;
int power(int a, int b);
int main()
{
	int a;
	int b;
	cin >> a >> b;
	cout << power(a, b);
	return 0;
}
int power(int a, int b)
{
	int c = 1;
	while (b >= 1)
	{
		c = c * a;
		b--;
	}
	return c;
}

/*
#include<iostream>
using namespace std;
int power(int base, int exponent);
int main()
{
	int base = 0;
	int exponent = 0;
	cin >> base >> exponent;
	cout << power(base, exponent) << endl;
	return 0;
}
int power(int base , int exponent)
{
	return power(base, exponent - 1)*base;
}
*/