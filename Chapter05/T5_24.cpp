/*
 *FileName: T5_24.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: �޸��Ǻ���ɵ�����ͼ��
 */

#include<iostream>
using namespace std;
int main()
{
	int n, j, i;
	cout << "����һ��������";
	cin >> n;

	//�ϰ�
	for (i = 1; i <= (n + 1) / 2; i++)
	{
		for (j = 1; j <= (n + 1) / 2 - i; j++)
			cout << " ";
		for (j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}

	//�°�
	for (i = 1; i <= (n - 1) / 2; i++)
	{
		for (j = 1; j <= i; j++)
			cout << " ";
		for (j = 1; j <= n - 2 * i; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}