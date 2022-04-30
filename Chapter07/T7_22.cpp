/*
*FileName:   T7_22.cpp
*Author£∫    Ziqi Yang
*E-mail :    3273241847@qq.com
*Date :      April 25th.2022
*College:    Henu University
*Funtion:    ∆Ô ø—≤”Œ
*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
using namespace std;
int n, flag = 0;
int dir[8][2] = { -2,-1,-2,1,-1,2,1,2,2,1,2,-1,1,-2,-1,-2 };
int ans[15][15];
void print()
{
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i][1];
        for (int j = 2; j <= n; j++)
            cout << " " << ans[i][j];
        cout << endl;
    }
}
void dfs(int x, int y, int num)
{
    if (num == n * n)
    {
        flag++;
        print();
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        x += dir[i][0];
        y += dir[i][1];
        if (!ans[x][y] && x >= 1 && x <= n && y >= 1 && y <= n)
        {
            num += 1;
            ans[x][y] = num;
            dfs(x, y, num);
            num -= 1;
            if (flag)return;
            ans[x][y] = 0;
        }
        x -= dir[i][0];
        y -= dir[i][1];
    }
}
int main()
{
    cin >> n;
    memset(ans, 0, sizeof(ans));
    ans[1][1] = 1;
    dfs(1, 1, 1);
    return 0;
}