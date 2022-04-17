/*
 *FileName: T6_35.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 猜数字游戏的修改
 */

#include<iostream>
using namespace std;

#include<ctime>

int main()
{

	int time1 = 0;
	srand((unsigned int)time(NULL));
	int choice1 = 1;
	while (choice1 == 1)
	{
		int num = rand() % 1000 + 1;
		cout << " I have a number between 1 and 1000" << endl
			<< "Can you guess my number?" << endl
			<< "please type your first guess";

		int val = 0;
		int choice1 = 0;
		while (choice1 == 0)
		{
			cin >> val;
			if (val > num)
			{
				cout << "too high,try again" << endl;
				time1++;
			}
			else if (val < num)
			{
				cout << "too low,try again" << endl;
				time1++;
			}
			else
			{
				time1++;
				cout << "Excellent!you guess the number" << endl;
				if (time1 < 10)
				{
					cout << "Either you know the secret or you got lucky" << endl;
				}
				else if (time1 == 10)
				{
					cout << "You know the secret" << endl;
				}
				else
				{
					cout << "You should be able to be better" << endl;
				}
				cout << "Would you like to play again(y or n)?";
				char choice2 = 'a';
				cin >> choice2;
				if (choice2 == 'y')
				{
					choice1 = 1;
				}
				else
				{
					return 0;
				}

			}

		}
	}



	system("pause");


}

