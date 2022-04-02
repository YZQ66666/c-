/*
 *FileName: T5_27.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 26th,2022
 *College:  Henu University
 *Function: È¥³ýcontinueÓï¾ä
 */

#include<iostream>
using namespace std;
int main()
{
	int choice=1;
	unsigned int count;
	for (count = 1; count <= 10; count++)
	{
		if (count == 5)
		{
			choice=0;
		}

		if(choice)
		cout << count << " ";
		choice = 1;
	}
	cout << "\nUsed continue to skip printing 5 " << endl;
	return 0;
}
