/*
*FileName:  T7_28.cpp
*Author:    Yang Ziqi
*E-mail:    3273241847@qq.com
*Date:      Mar 1th,2022
*College:   Henu University
*Function:  回文
*/
#include <stdio.h>
#include <string.h>

#define MAXN 20
bool palindrome( char *s );
int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("true\n");
    else
        printf("false\n");
     return 0;
}
bool palindrome(char* s)
{
	int num = 0;
	int len = strlen(s);//长度
	for (int i = 0; i < len / 2; i++)
	{
		if (*(s + i) == *(s + len - 1 - i))
		{
			num++;
		}
	}
	if (num == len / 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

