/*
 *FileName: T5_16.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 19th,2022
 *College:  Henu University
 *Function: ¸´Àû¼ÆËã
 */




#include <iostream>
using namespace std;
int main()
{
    unsigned int sum = 1;
    int c, j, e;
    for (int i = 1; i <= 10; i++)
    {
        sum = 1000;
        j = i;
        sum = sum * 105;
        while (j > 0)
        {
            sum = sum * 105;
            j--;
            sum = sum / 100;
        }

        c = sum % 100;
        e = sum / 100;
        cout << e << "." << c << endl;
    }


    return 0;
}
