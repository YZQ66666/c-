/*
 *FileName: main.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: 编写一个程序，在同一行上输出数1-4，并且用一个空格分隔每一对相邻的数，并用下述多种方式实现
 */

#include<iostream>
using namespace std;
int main()
{
	//一条语句，一个流插入运算符 
	cout << "1 2 3 4 ";

	//一条语句，四个流插入运算符
	cout << "1 " << "2 " << "3 " << "4 ";

	//四条语句
	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4 ";
	return 0;
}