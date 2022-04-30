/*
*FileName: T7_33.cpp
*Author:   Ziqi Yang
*E-mail:   3273241847@qq.com
*Date:     Mar 1th,2022
*College:  Henu University
*Function: √‘π¨±È¿˙
*/
#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;

int n,m;
char mp[50][50];
int book[50][50];
int nx[4][2]={1,0,0,-1,0,1,-1,0};//DLRU

struct node
{
	int x,y,step,dir[200];
};

void bfs()
{
	queue<node> q;
	node now,next;
	now.x=0;
	now.y=0;
	now.step=0;
	now.dir[0]=-1;
//	while(!q.empty())
//		q.pop();
	q.push(now);
	while(!q.empty())
	{
		now=q.front();
		q.pop();
		if(now.x==n-1&&now.y==m-1)
		{
			printf("%d\n",now.step);
			for(int i=1;i<=now.step;i++)
			{
				if(now.dir[i]==0) printf("D");
				else if(now.dir[i]==1) printf("L");
				else if(now.dir[i]==2) printf("R");
				else if(now.dir[i]==3) printf("U");
			}
			printf("\n");
			return;
		}
		for(int i=0;i<4;i++)
		{
			int tx=now.x+nx[i][0];
			int ty=now.y+nx[i][1];
			if(tx>=0&&tx<n&&ty>=0&&ty<m&&mp[tx][ty]=='0'&&book[tx][ty]==0)
			{
				book[tx][ty]=1;
				next=now;
				next.x=tx;
				next.y=ty;
				next.step=now.step+1;
				next.dir[now.step+1]=i;
				q.push(next);
			}
		}
	}
}

int main()
{
	while(~scanf("%d%d",&n,&m))
	{
		for(int i=0;i<n;i++)
		{
			scanf("%s",mp[i]);
		}
		memset(book,0,sizeof(book));
		bfs();
	}
	return 0;
}
