/*
*FileName: T8_15.cpp
*Author:   Ziqi yang
*E-mail:   3273241847@qq.com
*Date:     Mar 1th,2022
*College:  Henu University
*Function: »úÆ÷ÓïÑÔ±à³Ì
*/
#include <iostream>
using namespace std;
int main()
{   int a=0;
int sum=0;
    while(a>=0)
    { cin>>a;
      sum=sum+a;
    }
    cout<<sum<<endl;
    int p=7;
    sum=0;
    for(int i=1;i<=7;i++)
    {  cin>>p;
       sum=p+sum;
    }
    int b=sum/7;
    cout<<b<<endl;
    int n;
    int k;
    cin>>b;
    k=b;
    for(int j=1;j<n;j++)
    {  cin>>b;
      if(b>k)
        k=b;
    }
    cout<<k;
    return 0;
}
