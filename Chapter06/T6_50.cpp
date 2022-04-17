/*
 *FileName: T6_50.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 按值传递与按引用传递
 */

#include <iostream>
using namespace std;
int tripleByReference(int& count)
{
    return 3 * count;
}
int tripleByValue(int count)
{
    return 3 * count;
}
int main()
{
    int count;
    cin >> count;
    cout << tripleByReference(count) << endl;
    cout << tripleByValue(count);
    return 0;
}
