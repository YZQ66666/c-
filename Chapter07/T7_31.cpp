/*
*FileName: T7_31.cpp
*Author:  Ziqi Yang
*E-mail:  3273241847@qq.com
*Date:    Mar 1th,2022
*College: Henu University
*Function: ÄæĞò´òÓ¡×Ö·û´®
*/
#include <stdio.h>
#include <stdlib.h>

void print()
{
    char c;
    scanf("%c",&c);
    if(c != '#')
        print();
    if(c != '#')
        printf("%c",c);
}
int main()
{
    printf("ÇëÊäÈë×Ö·û´®£¬ÒÔ#½áÊø£º\n");
    print();
    return 0;
}

