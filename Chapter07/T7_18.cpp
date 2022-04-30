/*
 *FileName: T6_18.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 掷双筛子游戏的改进
 */

#include<iostream>
#include<iomanip>
#include<random>
#include<ctime>


using namespace std;
int main()
{
	default_random_engine engine(static_cast<unsigned int>(time(0)));
	uniform_int_distribution<unsigned int>randomInt(1, 6);
	int arr1[12] = { 0 };
	int win = 0;
	int lose = 0;
	for (unsigned int roll = 1; roll <= 36000; roll++)
	{
		arr1[randomInt(engine) + randomInt(engine)]++;
		if (randomInt(engine) + randomInt(engine) == 7)
		{
			win++;
			cout << roll << "th:" << win << endl;
			cout << roll << "th:" << lose << endl;
		}
		else
		{
			lose++;
			cout << roll << "th:" << win << endl;
			cout << roll << "th:" << lose<< endl;
		}
	}
	cout << "Face" << setw(13) << "Frequency" << endl;

	for (int i = 2; i <= 12; i++)
	{
		cout << setw(4) << i << setw(13) << arr1[i] << endl;
	}
	return 0;
}

