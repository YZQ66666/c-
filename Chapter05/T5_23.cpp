/*
 *FileName: T5_23.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: �Ǻ���ɵ�����ͼ��
 */


//ֻ��Ҫ��ӡ�Ǻ�ǰ��Ŀո���ǺžͿ�����

#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 9; i++)  //һ������
	{
		for (int j = 1; j <=5-i; j++) //��ӡ�ϰ��Ǻ�ǰ��Ŀո�
		{
			cout << " ";
		}
		for (int j = 1; j <= i - 5; j++) //��ӡ�°��Ǻ�ǰ��Ŀո�
		{
			cout << " ";
		}
		for (int j = 1; (j <= 2 * i - 1) && (i <= 5); j++) // ��ӡ�ϰ��Ǻ�
		{
			cout << "*";
		}
		for (int j = 1; (j <= 9 - 2 * (i - 5))&&(i>5);j++) //��ӡ�°��Ǻ�
		{
			cout<<"*";
		}
		cout << endl;
	}
	return 0;
}