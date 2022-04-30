/*
 *FileName: T7_21.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: 销售汇总
 */

#define _CRT_SECURE_NO_DEPRECATE/*在比较高版本的vs添加由于支持scanf和fopen等函数*/
#include <iostream>
#include <stdlib.h>
#define M 150
using namespace std;

int n;//小纸条数目
class Menu //菜单
{
public:
	static void MainMenu();//主菜单
};

class Scrip//纸条类
{
private:
	int id;//销售员代号
	int num;//产品代号
	int sale;//销量
public:
	static void readdata();//读取
	static void collating();//整理读取的信息
	static void detail();//查看销售情况
	static void seller_sort();//针对销售员销量排序
	static void product_sort();//针对产品销量，对产品排序
	static void total();//统计报表
}note[M];

class ElySale
{
public:
	int sale[5];
}Ely[4];//保存各产品销量
void Scrip::readdata()
{
	FILE* fp = 0;
	if ((fp = fopen("list.txt", "r")) == NULL)
	{
		printf("Feil opening falling!\n");
		exit(0);
	}
	else
		for (n = 0; !feof(fp); n++)
		{
			fscanf(fp, "%d %d %d\n", &note[n].id, &note[n].num, &note[n].sale);//保存文件数据到结构体
		}
	fclose(fp);
}

void Scrip::collating()//整理读取的信息并分类
{
	int i;
	for (i = 0; i < n; i++)//遍历所有纸条
	{
		switch (note[i].num)//按产品分大类，销售员分小类，累加每个人各类产品销售量
		{
		case 1://产品1
			switch (note[i].id)//销售员代号
			{
			case 1:
				Ely[0].sale[0] += note[i].sale; break;
			case 2:
				Ely[1].sale[0] += note[i].sale; break;
			case 3:
				Ely[2].sale[0] += note[i].sale; break;
			case 4:
				Ely[3].sale[0] += note[i].sale; break;
			}
			break;
		case 2: //产品2
			switch (note[i].id)//销售员代号
			{
			case 1:
				Ely[0].sale[1] += note[i].sale; break;
			case 2:
				Ely[1].sale[1] += note[i].sale; break;
			case 3:
				Ely[2].sale[1] += note[i].sale; break;
			case 4:
				Ely[3].sale[1] += note[i].sale; break;
			}
			break;
		case 3://产品3
			switch (note[i].id)//销售员代号
			{
			case 1:
				Ely[0].sale[2] += note[i].sale; break;
			case 2:
				Ely[1].sale[2] += note[i].sale; break;
			case 3:
				Ely[2].sale[2] += note[i].sale; break;
			case 4:
				Ely[3].sale[2] += note[i].sale; break;
			}
			break;
		case 4://产品4
			switch (note[i].id)//销售员代号
			{
			case 1:
				Ely[0].sale[3] += note[i].sale; break;
			case 2:
				Ely[1].sale[3] += note[i].sale; break;
			case 3:
				Ely[2].sale[3] += note[i].sale; break;
			case 4:
				Ely[3].sale[3] += note[i].sale; break;
			}
			break;
		case 5://产品5
			switch (note[i].id)//销售员代号
			{
			case 1:
				Ely[0].sale[4] += note[i].sale; break;
			case 2:
				Ely[1].sale[4] += note[i].sale; break;
			case 3:
				Ely[2].sale[4] += note[i].sale; break;
			case 4:
				Ely[3].sale[4] += note[i].sale; break;
			}
			break;
		}
	}
}

void Scrip::detail()//显示销售情况
{
	int i, j;
	for (i = 0; i < 4; i++)//遍历销售员
	{
		cout << "\n\t\t" << i + 1 << "号销售员销售情况:" << endl;
		for (j = 0; j < 5; j++)/*按销售员分类遍历所有产品并显示信息*/
			cout << "\t\t" << j + 1 << "号产品销售数量:" << Ely[i].sale[j] << endl;
	}
}

void Scrip::seller_sort()//按销量对销售员排序
{
	int i, j, k;
	int a[4] = { 0,0,0,0 };//用于储存四个销售员各自的销售总量
	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
			a[i] += Ely[i].sale[j];//统计每个销售员所有产品总销售量
	for (i = 0; i < 4; i++)
	{
		k = 0;//用于标记本轮最大数
		for (j = 0; j < 4; j++)
			if (a[k] < a[j])
				k = j;
		cout << "销量第" << i + 1 << ";" << "\t" << k + 1 << "号销售员" << "\t销量: " << a[k] << endl;
		a[k] = -1;///*输出最大数和排名，将最大数标记为负*/
	}
}
void Scrip::product_sort()//按产品销量对该类产品排序
{
	int i, j, k;
	int b[5] = { 0,0,0,0,0 };//存放五种产品总销量

	for (i = 0; i < 5; i++)
		for (j = 0; j < 4; j++)
			b[i] += Ely[j].sale[i];//统计每件产品的总销量
	for (i = 0; i < 5; i++)
	{
		k = 0;//用于标记本轮最大数
		for (j = 0; j < 5; j++)
			if (b[k] < b[j])
				k = j;
		cout << "销量第" << i + 1 << "的产品:" << "\t" << k + 1 << "号产品" << "\t销量: " << b[k] << endl;
		b[k] = -1;///*输出最大数和排名，将最大数标记为负*/
	}
}
void Scrip::total()//输出报表
{
	int i, j;
	printf("\n\t销售员\t产品\t销量\n");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
			cout << "\t " << i + 1 << "\t " << j + 1 << "\t" << Ely[i].sale[j] << endl;
}
void Menu::MainMenu()
{
	cout << "\t\t********************菜单*********************\n" << endl;
	cout << "\t\t 1.查看每人每种产品的销售额" << endl;
	cout << "\t\t 2.按销售额对销售员排序(销售员代号)" << endl;;
	cout << "\t\t 3.对每种产品总销售额从高到低排序(产品代号和销售额)" << endl;
	cout << "\t\t 4.输出统计报表" << endl;
	cout << "\t\t 5.导入前一个月销售情况" << endl;
	cout << "\t\t 0.退出" << endl;
	cout << "\n\n\t\t*********************************************" << endl;
	cout << "请选择(1-5):[ ]\b\b";
}

void start()
{
	int select;
	while (true)
	{
		Menu::MainMenu();
		cin >> select;
		switch (select)
		{
		case 1://查看每人每种产品的销售额
			Scrip::detail();
			break;
		case 2://按销售额对销售员排序(销售员代号)
			Scrip::seller_sort();
			break;
		case 3://对每种产品总销售额从高到低排序(产品代号和销售额)
			Scrip::product_sort();
			break;
		case 4://输出统计报表
			Scrip::total();
			break;
		case 5://导入前一个月销售情况
		{
			Scrip::readdata();//读取文件
			Scrip::collating();//对信息整理分类
		}
		break;
		case 0://退出系统
			cout << "欢迎下次使用" << endl;
			system("pause");
			exit(0);
		default:
			cout << "输入错误!" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
}
int main()
{
	start();
	system("pause");
	return 0;
}
