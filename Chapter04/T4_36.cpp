/*
 *FileName: T4_36.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 使用加密系统增强隐私
 */

#include<iostream>
using namespace std;
int main()
{
	//加密
	
	/*
	int x;
	cin >> x;
	int a = x % 10;
	int b = x / 10 % 10;
	int c = x / 100 % 10;
	int d = x / 1000;
	a = (a + 7)%10;
	b = (b + 7)%10;
	c = (c + 7)%10;
	d = (d + 7)%10;
	int temp1 = 0;
	int temp2 = 0;
	temp1 = c;
	c = a;
	a = temp1;
	temp2 = b;
	b = d;
	d = temp2;
	int sum = 0;
	sum = a + b * 10 + c * 100 + d * 1000;
	cout<<sum<<endl;
	*/

	//解密
	int x;
	cin >> x;
	int a = x % 10;
	int b = x / 10 % 10;
	int c = x / 100 % 10;
	int d = x / 1000;
	int temp1, temp2;
	temp1 = a;
	a = c;
	c = temp1;
	temp2 = b;
	b = d;
	d = temp2;
	a = a + 10 - 7;
	b = b + 10 - 7;
	c = c + 10 - 7;
	d = d + 10 - 7;
	int sum = 0;
	sum = a + b * 10 + c * 100 + d * 1000;
	cout << sum << endl;
	
	
	system("pause");
	return 0;
}