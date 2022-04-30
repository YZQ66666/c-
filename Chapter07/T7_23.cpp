/*
*FileName:   T7_23.cpp
*Author��    Ziqi Yang
*E-mail :    3273241847@qq.com
*Date :      April 25th.2022
*College:    He Nan University
*Funtion:    楠平儔嗄
*/

#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int WIDTH = 8;
int HEIGHT = 8;
bool HasStep[9][9] = { false };
int v[9][9] = { 0 };
bool hasFind = false;
class  Point
{
public:
	int x;
	int y;
	Point(int& a, int& b)
	{
		x = a;
		y = b;
	}
	vector<Point> next()
	{
		vector<Point> p;
		int step[8][2] = { { -1, -2 }, { -2, -1 }, { -2, 1 }, { -1, 2 }, { 1, 2 }, { 2, 1 }, { 2, -1 }, { 1, -2 } };
		for (int i = 0; i < 8; i++)
		{
			int a = x + step[i][0];
			int b = y + step[i][1];
			if (Point(a, b).isOK() && !HasStep[a][b])
			{
				p.push_back(Point(a, b));
			}
		}

		return p;


	}
	bool isOK()
	{
		return (x >= 1 && x <= WIDTH && y >= 1 && y <= HEIGHT);
	}
	void print(vector<Point> p)
	{
		cout << "_____________________________________________" << endl;
		for (int i = 0; i < p.size(); i++)
		{
			cout << p[i].x << ' ' << p[i].y << endl;
		}
		cout << "！！！！！！！！！！！！！！！！！！！！！！！！！" << endl;
	}
}
;

void print(int v[9][9])
{
	for (int i = 1; i <= WIDTH; i++)
	{
		for (int j = 1; j <= HEIGHT; j++)
		{
			cout << setw(4) << v[i][j];
		}
		cout << endl;
	}
}
void print(vector<Point> p)
{
	for (int i = 0; i < p.size(); i++)
	{
		cout << p[i].x << ' ' << p[i].y << endl;
	}
}
void travel(int x, int y, int step)
{
	if (hasFind)
	{
		return;
	}

	v[x][y] = step;
	HasStep[x][y] = true;
	if (step == WIDTH * HEIGHT)
	{
		print(v);
		return;
	}
	if (step == 64)
	{
		print(v);
		hasFind = true;
		return;
	}
	vector<Point> list = Point(x, y).next();

	for (int i = 0; i < list.size(); i++)
	{
		step = step + 1;
		travel(list[i].x, list[i].y, step);
		step = step - 1;
	}

	v[x][y] = 0;
	HasStep[x][y] = false;

}

int main()
{

	int a = 5;
	int b = 1;
	travel(a, b, 1);
	cout << "厮誼欺盾" << endl;
	getchar();
	return 1;
}