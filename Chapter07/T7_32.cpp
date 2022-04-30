/*
*FileName: T7_32.cpp
*Author:   Ziqi Yang
*E-mail:   3273241847@qq.com
*Date:     Mar 1th,2022
*College:  Henu University
*Function: 寻找array对象的最小值
*/
#include <iostream>

int main()
{
    int userInput = 0;
    int minNumber = 100000000;
    for(int i = 0; i < 10; i++)
    {
        std::cout << "Enter a number: ";
        std::cin>>userInput;
        std::cout << userInput << "\n";
        if(userInput < minNumber)
        {
            minNumber = userInput;
        }
    }
    std::cout << "Minimum number = " << minNumber << "\n";
    return 0;
}
