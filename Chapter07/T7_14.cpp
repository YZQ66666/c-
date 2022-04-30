/*
 *FileName: T6_00.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 利用vector对象去重
 */

#include <iostream>
#include <vector>
#include <set>

using namespace std;


int main()
{
    int myints[9999] = { 0 };
    int number = 0;
    for (int i = 0; i <20; i++)
    {
        cin >> number;
        myints[i] = number;
    }
    int len = sizeof(myints) / sizeof(int);
    vector<int> vec(myints, myints + len);
    set<int>s(vec.begin(), vec.end());
    vec.assign(s.begin(), s.end());
    for (int x : vec)
        cout << x << ",";
    return 0;
}


