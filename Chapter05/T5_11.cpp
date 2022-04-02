/*
 *FileName: T5_00.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: ¸´Àû
 */


#include <iostream>
#include <iomanip>
#include<cmath>
    using namespace std;
    int main()
    {
        double amount;
        double rate = 0.05;
        double principal = 1000;
        cout << "Year" << setw(21) << "Amount on deposit" << setw(21) << "compound interest" << endl;
        for (; rate <= 0.1; rate = rate + 0.01)
        {
            for (unsigned int year = 1; year <= 10; year++)
            {
                amount = principal;
                cout << fixed << setprecision(2);
                amount = principal * pow(1.0 + rate, year);
                cout << setw(4) << year << setw(21) << amount << setw(21) << rate << endl;
            }
            cout << endl;
        }
        return 0;
    }
