/*
 *FileName: T6_27.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: ����С��
 */

int sort(double arr[3]);
#include<iostream>
using namespace std;
int main()
{

	double arr[3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	cout << sort(arr) << endl;

	
	return 0;
}
int sort(double arr[3])
{
	//��ʼð������
	//�ܹ���������Ϊ Ԫ�ظ���-1
	for (int i = 0; i < 3 - 1; i++)
	{
		//�ڲ�ѭ���Աȴ���=Ԫ�ظ���-��ǰ����-1
		for (int j = 0; j < 3 - i - 1; j++)
		{
			//�����һ�����ֱȵڶ������ִ󣬽�����������
			if (arr[j] > arr[j + 1])
			{
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr[0];
}
	
