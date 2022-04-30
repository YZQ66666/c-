/*FileName:  T7_.cpp
*Author：    Ziqi Yang
*E-mail :    3273241847@qq.com
*Date :      Mar 1th.2022
*College:    He Nan University
*Funtion:    模拟程序的改进
*/


int chess[8][8] = {};
int counter = 0;
bool isOut(int x, int y)
{
    if (x >= 0 && x <= 7 && y >= 0 && y <= 7)
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool isVisited(int x, int y)
{
    if (chess[x][y] != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void dfs(int x, int y)
{
    if (counter == 64)
        return;
    if (!(isOut(x, y)) && !(isVisited(x, y)))
    {
        counter++;
        chess[x][y] = counter;
        dfs(x + 2, y + 1);
        dfs(x + 1, y + 2);
        dfs(x - 1, y + 2);
        dfs(x - 2, y + 1);
        dfs(x - 2, y - 1);
        dfs(x - 1, y - 2);
        dfs(x + 1, y - 2);
        dfs(x + 2, y - 1);
        return;
    }
    else
    {
        return;
    }
}
