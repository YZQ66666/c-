/*
*FileName:   T7_29.cpp
*Author:     Ziqi Yang
*E-mail:     3273241847@qq.com
*Date:       Mar 1th,2022
*College:    Henu University
*Function:   ∞Àª ∫ÛŒ Ã‚
*/
#include<stdio.h>
#define line 8
int count = 0;
int Map[8][8];
void Search(int x,int y);
int Check(int x,int y);

int main()
{
	int i = 0,j = 0;
	for(i = 0;i <= 8;i++)
		for(j = 0;j <= 8;j++)
			Map[i][j] = 0;
	Search(0,0);
	printf("%d",count);
	return 0;
}

void Search(int row,int col)
{
	if( col >= line)
		return ;
	if(Check(row,col))
	{
		Map[row][col] = 1;
		if(row == line -1)
			count++;
		else
			Search(row+1,0);
	}
	Map[row][col] = 0;
	Search(row, col+1);
}

int Check(int row,int col)
{
	int i = 0,m = 0, n = 0,prerow = row,precol = col;
	for(i = 0;i <= line-1;i++)
		if(Map[i][col] == 1)	return 0;
	for(i = 0; i <= line - 1;i++)
		if(Map[row][i] == 1)	return 0;

	m = row >= col ? col : row ;
	row = row - m,col = col - m;
	while(row <= line -1 && col <= line -1)
	{
		if(Map[row][col] == 1 && row != prerow && col != precol)
			return 0;
		row++,col++;
	}

	row = prerow,col = precol;
	n = row >= (line - 1 - col) ? (line - 1 - col) : row ;
	row = row - n,col = col + n;
	while(row <= line -1 && col >= 0)
	{
	        if(Map[row][col] == 1 && row != prerow && col != precol)
			return 0;
		row++,col--;
	}
	return 1;
}
