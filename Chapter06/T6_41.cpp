/*
 *FileName: T6_41.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 递归的最大公约数
 */

#include <iostream>
using namespace std;
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}
int main()

{
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y);
    return 0;
}

