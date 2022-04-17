/*
 *FileName: T6_00.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: C++11的随机数：掷双筛子游戏的改进
 */

#include <iostream>
#include <iomanip>
#include <random>
#include <cstdlib>
using namespace std;
int main()
{
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 6);
    unsigned int seed = 0;
    cout << "Enter seed: ";
    cin >> seed;
    srand(seed);
    for (unsigned int i = 1; i <= 10; i++)
    {
        cout << setw(10) << randomInt(engine);
        if (i % 5 == 0)
        {
            cout << endl;
        }
    }
    return 0;
}