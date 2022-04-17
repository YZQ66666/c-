/*
 *FileName: T6_52.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 16th,2022
 *College:  Henu University
 *Function: º¯ÊýÄ£°åminimum
 */

#include <iostream>
using namespace std;
template<class T>
T minimum(T value1, T value2)
{
	T minimumValue = value1;
	if (value2 < minimumValue)
		minimumValue = value2;
	return minimumValue;
}

int main()
{
	int i1, i2;
	cin >> i1 >> i2;
	cout << "The minimum integer value is: "
		<< minimum(i1, i2) << endl;

	double d1, d2;
	cin >> d1 >> d2;
	cout << "The minimum double value is: "
		<< minimum(d1, d2) << endl;

	char c1, c2;
	cin >> c1 >> c2;
	cout << "The minimum characters value is: "
		<< minimum(c1, c2) << endl;
	return 0;
}