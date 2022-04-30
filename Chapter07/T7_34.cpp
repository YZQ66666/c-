/*
*FileName: T7_34.cpp
*Author:   Ziqi Yang
*E-mail:   3273241847@qq.com
*Date:     Mar 1th,2022
*College:  Henu University
*Function: Ëæ»úÉú³ÉÃÔ¹¬
*/
#include <iostream>
using namespace std;

int maze[8][8] = {{0,0,0,0,0,0,0,0},{0,1,1,1,1,0,1,0},{0,0,0,0,1,0,1,0},{0,1,0,0,0,0,1,0},
{0,1,0,1,1,0,1,0},{0,1,0,0,0,0,1,1},{0,1,0,0,1,0,0,0},{0,1,1,1,1,1,1,0}};

const int fx[4] = {1,0,-1,0};
const int fy[4] = {0,1,0,-1};
void printPath()
{
    for (int i=0;i<8;++i)
    {
        for (int j=0;j<8;++j)
        {
            if (3 == maze[i][j])
            {
                cout<<".";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}

void search(int i, int j)
{
    int newx;
    int newy;
    for (int k=0;k<4;++k)
    {
        newx = i+fx[k];
        newy = j+fy[k];

        if (newx>=0 && newx <8 && newy>=0 && newy<8 && 0 == maze[newx][newy])
        {
            maze[newx][newy] = 3;
            if (7 == newx && 7 == newy)
            {
                printPath();
                maze[newx][newy] = 0;
            }
            else
            {
                search(newx,newy);
            }
        }
    }


    maze[i][j] = 0;
}

int main()
{
    maze[0][0] = 3;
    search(0,0);
    return 0;
}
