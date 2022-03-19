/*
 *FileName: T4_19.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 找最大的两个数
 */

#include<iostream>
using namespace std;
int main()
{
	int x=0;
	int max1=-9999, max2=-9999,temp=0;
	int i=1;
	while (i <= 10)
	{
		cin >> x;
		if (x > max2)
		{
			max2 = x;
		}
	
		if (max2 > max1)
		{
			temp = max1;
			max1 = max2;
			max2 = temp;
		}
		
		
		i++;
	}
	cout << "最大的两个数为：" << max1 << " " << max2 << endl;

	return 0;
}