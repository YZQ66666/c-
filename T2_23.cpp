/*
 *FileName: main.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: ������С����
 */

#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int arr[5] = { a,b,c,d,e };

	//��ʼð������
		//�ܹ���������Ϊ Ԫ�ظ���-1
	for (int i = 0; i < 5 - 1; i++)
	{
		//�ڲ�ѭ���Աȴ���=Ԫ�ظ���-��ǰ����-1
		for (int j = 0; j < 5 - i - 1; j++)
		{
			//�����һ�����ֱȵڶ������ִ󣬽�����������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "max=" << arr[0] << endl;
	cout << "min=" << arr[4] << endl;

	return 0;
}