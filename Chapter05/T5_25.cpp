/*
 *FileName: T5_25.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: È¥³ýbreakºÍcontinue
 */

#include<iostream>
using namespace std;
int main()
{
	int choice = 1;
	unsigned int count;
	for (count = 1; count <= 10; count++)
	{
		if (count == 5)
		{
			choice = 0;
		}

		if (choice)
			cout << count << " ";
	}
	cout << "\nBroke out of loop at count =" << count << endl;
	return 0;
}
