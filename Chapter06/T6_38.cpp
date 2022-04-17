/*
 *FileName: T6_38.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: ��ŵ������
 */


#include <iostream>

using namespace std;

void TowersofHanoi(int n, int x, int y , int z);


int main()
{
    int n = 0;
    cin >> n;
    int x, y, z;
    x = 1;
    y = 2;
    z = 3;
    TowersofHanoi(n, x, y, z);
    return 0;
}
void TowersofHanoi(int n, int x , int y , int z)
{

    if (n)
    {
        TowersofHanoi(n - 1, x, z, y);//��n-1�����Ӵ�x�ƶ���z
        cout << "From" << x << "To" << y << endl;//����n�������ƶ���y
        TowersofHanoi(n - 1, z, y, x);//��z�ϵ������ƶ���y
    }
}
