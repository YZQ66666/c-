/*
*FileName:   T7_30.cpp
*Author:     Ziqi Yang
*E-mail:     3273241847@qq.com
*Date:       Mar 1th,2022
*College:    Henu University
*Function:   ¥Ú”°array∂‘œÛ
*/
#include <iostream>
#include <vector>
using namespace std;

void my_print(vector<int> ivec);

int main()
{
	vector<int> ivec;

	for (decltype(ivec.size()) i = 0; i != 200; i++)
	{
		ivec.push_back(i);
	}

	my_print(ivec);

	return 0;
}

static size_t i = 0;

void my_print(vector<int> ivec)
{
	if(i != ivec.size())
	{
		cout << ivec[i++]<< endl;
		my_print(ivec);
	}

}
