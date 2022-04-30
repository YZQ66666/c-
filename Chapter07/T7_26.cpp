/*
*FileName:  T7_26.cpp
*Author£∫   Ziqi Yang
*E-mail :   3273241847@qq.com
*Date :     April 25th.2022
*College:   He Nan University
*Funtion:   ∆Ô ø—≤”Œ£∫∑‚±’—≤”Œ≤‚ ‘
*/

#include<iostream>
#include<vector>
using namespace std;
#define size 6
int visit = 0;
vector<vector<int>>mark;
const int dx[8] = { -1,-2,-2,-1,1,2,2,1 };
const int dy[8] = { -2,-1,1,2,2,1,-1,-2 };
void print(vector<vector<int>>mark)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			cout << mark[i][j] << "\t";
		}
		cout << endl << endl;
	}
	cout << endl << endl;
}
int waysum(int x, int y)
{
	int sum = 0;
	for (int i = 0; i < 8; i++)
	{
		int tempx = x + dx[i];
		int tempy = y + dy[i];
		if (tempx >= 0 && tempx < size && tempy >= 0 && tempy < size && mark[tempx][tempy] == 0)
			sum++;
	}
	return sum;
}
bool knightTour(int x, int y)
{
	visit++;
	mark[x][y] = visit;
	if (visit == size * size)
		return true;
	vector<int> a;
	vector<vector<int>>point;
	int sum = 0, nextsum = 0;
	int tempx, tempy;
	int nextx, nexty;
	int minway = size + 1;
	for (int i = 0; i < 8; i++)
	{
		tempx = x + dx[i];
		tempy = y + dy[i];
		if (tempx >= 0 && tempx < size && tempy >= 0 && tempy < size && mark[tempx][tempy] == 0)
		{
			a.push_back(tempx);
			a.push_back(tempy);
			point.push_back(a);
			sum++;
			nextsum = waysum(tempx, tempy);
			if (nextsum < minway)
			{
				minway = nextsum;
				nextx = tempx;
				nexty = tempy;
			}
		}
	}
	bool flag = false;
	if (sum == 0)
	{
		visit--;
		mark[x][y] = 0;
		return false;
	}
	else
	{
		flag = knightTour(nextx, nexty);
		if (flag)return true;
		else
		{
			for (int i = 0; i < sum; i++)
			{
				flag = knightTour(point[i][0], point[i][1]);
				if (flag)return true;
			}
		}
	}

	visit--;
	mark[x][y] = 0;
	return false;
}
int main()
{
	for (int i = 0; i < size; i++)
	{
		mark.push_back(vector<int>());
		for (int j = 0; j < size; j++)
			mark[i].push_back(0);
	}
	knightTour(1, 2);
	print(mark);
	system("pause");
	return 0;
}
