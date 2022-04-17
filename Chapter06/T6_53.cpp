/*
 *FileName: T6_53.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: º¯ÊýÄ£°åmaximum
 */

#include <iostream>
using namespace std;
template<class T>
T maximum(T value1, T value2)
{
	T maximumValue = value1;
	if (value2 > maximumValue)
		maximumValue = value2;
	return maximumValue;
}

int main()
{
	int i1, i2;
	cin >> i1 >> i2;
	cout << "The maximum integer value is: "
		<< maximum(i1, i2) << endl;

	double d1, d2;
	cin >> d1 >> d2;
	cout << "The maximum double value is: "
		<< maximum(d1, d2) << endl;

	char c1, c2;
	cin >> c1 >> c2;
	cout << "The maximum characters value is: "
		<< maximum(c1, c2) << endl;
	return 0;
}
