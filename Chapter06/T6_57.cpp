/*
 *FileName: T6_57.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 计算机辅助教学
 */

#include <iostream>
using namespace std;
int time(int a, int b)
{
    int c = a * b;
    return c;
}
int main()
{
    int a, b;
    int d = 1, e = 0;
    while (d != e)
    {
        a = 0 + rand() % 9;
        b = 0 + rand() % 9;
        cout << "How much is " << a << " times " << b << endl;
        cin >> d;
        e = time(a, b);
        if (e == d)
            cout << "Very good!";
        else
        {
            while (e != d)
            {
                cout << " No,please try again" << endl;
                cin >> d;
            }
            cout << "Very good!";
        }
    }
    return 0;
}
