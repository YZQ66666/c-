/*
 *FileName: T8_08.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: πÍÕ√»¸≈‹
 */
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<stdlib.h>
using namespace std;
long a = 1, b = 1, c;
int main()
{
    srand((unsigned)time(NULL));
    c = rand() % 10 + 1;
    if (c >= 1 && c <= 5)
    {
        a += 3;
        if (a < 1)
        {
            a = 1;
        }
    }
    if (c >= 6 && c <= 7)
    {
        a -= 6;
        if (a < 1)
        {
            a = 1;
        }
    }
    if (c >= 8 && c <= 10)
    {
        a++;
        if (a < 1)
        {
            a = 1;
        }
    }
    if (c >= 1 && c <= 2)
    {
    }
    if (c >= 3 && c <= 4)
    {
        b += 9;
    }
    if (c == 5)
    {
        b -= 12;
        if (b < 1)
        {
            b = 1;
        }
    }
    if (c >= 6 && c <= 8)
    {
        b++;
    }
    if (c >= 9 && c <= 10)
    {
        b += 2;
    }
    if (a > b)
    {
        cout << setfill('-') << setw(b) << 'H';
        cout << setfill('-') << setw(a - b) << 'T';
        cout << setfill('-') << setw(70 - b) << '-' << endl;
    }
    else if (a == b)
    {
        cout << setfill('-') << setw(b) << 'T H';
        cout << setfill('-') << setw(70 - b) << '-' << endl;
    }
    else
    {
        cout << setfill('-') << setw(a) << 'H';
        cout << setfill('-') << setw(b - a) << 'T';
        cout << setfill('-') << setw(70 - a) << '-' << endl;
    }
    if (a == b)
    {
        cout << "OUCH!!" << endl;
    }
    if (a >= 70 && b < 70)
    {
        cout << "TORTOISE WINS!!!YAY!!!" << endl;
        return 0;
    }
    if (a < 70 && b >= 70)
    {
        cout << "Hare wins. Yuch." << endl;
        return 0;
    }
    if (a >= 70 && b >= 70)
    {
        cout << "It's a tie." << endl;
        return 0;
    }
    if (a < 70 && b < 70)
    {
        return main();
    }
    return 0;
}