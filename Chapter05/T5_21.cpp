/*
 *FileName: T5_21.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: н�����
 */

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double sum;
	double a;//����Ĺ̶�����
	double b;//Сʱ���Ĺ���Сʱ
	double c;//Сʱ���Ĺ̶�ÿСʱ����
	double d;//ÿ�µ�����ë��
	double e;//�Ƽ��������Ĳ�Ʒ����
	double f;//ÿ����һ����Ʒ�Ľ��
	int choice=1;//choiceΪ1��ʾҪ�鿴����
	
	while (choice)
	{
		switch (n)
		{
		case 1:
			cin >> a;
			sum = a;
			cout << sum << endl;
			break;

		case 2:
			cin >> c;
			cin >> b;
			if (b < 40)
			{
				sum = b * c;
			}
			else
			{
				sum = 40 * c + (b - 40) * 1.5 * c;
			}
			cout << sum << endl;
			break;

		case 3:
			cin >> d;
			sum = 250 + 0.057 * d;
			cout << sum << endl;
			break;

		case 4:
			cin >> e;
			cin >> f;
			sum = e * f;
			cout << sum << endl;
		}
		cin >> choice;
	}
	return 0;
}