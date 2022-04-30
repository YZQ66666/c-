/*
*FileName:  T7_27.cpp
*Author£∫   Ziqi Yang
*E-mail :   3273241847@qq.com
*Date :     April 25th.2022
*College:   He Nan University
*Funtion:   ∞Æ¿≠Õ–—∑ÀπÀ„∑®
*/
#include <iostream>
using namespace std;
const int m = 100;

int main()
{
	int a[m], b[m], n = 0;


	for (int i = 0; i < m; i++)
	{
		b[i] = 1;
	}

	for (int i = 2; i < m; i++)
	{
		for (int j = 2; i * j <= m; j++)
		{
			b[i * j] = 0;
		}
		if (b[i] != 0)
		{
			a[n] = i;
			n++;
		}
	}

	cout << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
