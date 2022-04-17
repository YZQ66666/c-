/*
 *FileName: T6_38.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 汉诺塔问题
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
        TowersofHanoi(n - 1, x, z, y);//将n-1个盘子从x移动到z
        cout << "From" << x << "To" << y << endl;//将第n个盘子移动到y
        TowersofHanoi(n - 1, z, y, x);//将z上的盘子移动到y
    }
}
