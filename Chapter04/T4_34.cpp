/*
 *FileName: T4_34.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: �׳�
 */

#include<iostream>
using namespace std;
int main()
{
	//a
	/*
	int x;
	cin >> x;
	int sum = 1;
	while (x > 0)
	{
		sum = sum * x;
		x = x - 1;
	}
	cout << sum << endl;
	return 0;
	*/


	//b
	//c�е�x=1


	//c
	int n, x;
	cin >> x >> n;
	int sum = 1;
	
	int b;
	int j=0;
	int a = x;
	for (int i = 1; i <= n; i++)
	{
		j = i;
		while (j > 0)
		{
			b = 1;
			b = b * j;
			j--;
		}
		sum = sum + x / b;
		b = 1;
		x = x * a;
	}
	cout << "�����e��x�η���ֵΪ" << sum << " e�ľ���Ϊ" << n+1 << endl;

	return 0;
}

	