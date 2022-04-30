/*
 *FileName: T7_21.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 9th,2022
 *College:  Henu University
 *Function: ���ۻ���
 */

#define _CRT_SECURE_NO_DEPRECATE/*�ڱȽϸ߰汾��vs�������֧��scanf��fopen�Ⱥ���*/
#include <iostream>
#include <stdlib.h>
#define M 150
using namespace std;

int n;//Сֽ����Ŀ
class Menu //�˵�
{
public:
	static void MainMenu();//���˵�
};

class Scrip//ֽ����
{
private:
	int id;//����Ա����
	int num;//��Ʒ����
	int sale;//����
public:
	static void readdata();//��ȡ
	static void collating();//�����ȡ����Ϣ
	static void detail();//�鿴�������
	static void seller_sort();//�������Ա��������
	static void product_sort();//��Բ�Ʒ�������Բ�Ʒ����
	static void total();//ͳ�Ʊ���
}note[M];

class ElySale
{
public:
	int sale[5];
}Ely[4];//�������Ʒ����
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
			fscanf(fp, "%d %d %d\n", &note[n].id, &note[n].num, &note[n].sale);//�����ļ����ݵ��ṹ��
		}
	fclose(fp);
}

void Scrip::collating()//�����ȡ����Ϣ������
{
	int i;
	for (i = 0; i < n; i++)//��������ֽ��
	{
		switch (note[i].num)//����Ʒ�ִ��࣬����Ա��С�࣬�ۼ�ÿ���˸����Ʒ������
		{
		case 1://��Ʒ1
			switch (note[i].id)//����Ա����
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
		case 2: //��Ʒ2
			switch (note[i].id)//����Ա����
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
		case 3://��Ʒ3
			switch (note[i].id)//����Ա����
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
		case 4://��Ʒ4
			switch (note[i].id)//����Ա����
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
		case 5://��Ʒ5
			switch (note[i].id)//����Ա����
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

void Scrip::detail()//��ʾ�������
{
	int i, j;
	for (i = 0; i < 4; i++)//��������Ա
	{
		cout << "\n\t\t" << i + 1 << "������Ա�������:" << endl;
		for (j = 0; j < 5; j++)/*������Ա����������в�Ʒ����ʾ��Ϣ*/
			cout << "\t\t" << j + 1 << "�Ų�Ʒ��������:" << Ely[i].sale[j] << endl;
	}
}

void Scrip::seller_sort()//������������Ա����
{
	int i, j, k;
	int a[4] = { 0,0,0,0 };//���ڴ����ĸ�����Ա���Ե���������
	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
			a[i] += Ely[i].sale[j];//ͳ��ÿ������Ա���в�Ʒ��������
	for (i = 0; i < 4; i++)
	{
		k = 0;//���ڱ�Ǳ��������
		for (j = 0; j < 4; j++)
			if (a[k] < a[j])
				k = j;
		cout << "������" << i + 1 << ";" << "\t" << k + 1 << "������Ա" << "\t����: " << a[k] << endl;
		a[k] = -1;///*��������������������������Ϊ��*/
	}
}
void Scrip::product_sort()//����Ʒ�����Ը����Ʒ����
{
	int i, j, k;
	int b[5] = { 0,0,0,0,0 };//������ֲ�Ʒ������

	for (i = 0; i < 5; i++)
		for (j = 0; j < 4; j++)
			b[i] += Ely[j].sale[i];//ͳ��ÿ����Ʒ��������
	for (i = 0; i < 5; i++)
	{
		k = 0;//���ڱ�Ǳ��������
		for (j = 0; j < 5; j++)
			if (b[k] < b[j])
				k = j;
		cout << "������" << i + 1 << "�Ĳ�Ʒ:" << "\t" << k + 1 << "�Ų�Ʒ" << "\t����: " << b[k] << endl;
		b[k] = -1;///*��������������������������Ϊ��*/
	}
}
void Scrip::total()//�������
{
	int i, j;
	printf("\n\t����Ա\t��Ʒ\t����\n");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
			cout << "\t " << i + 1 << "\t " << j + 1 << "\t" << Ely[i].sale[j] << endl;
}
void Menu::MainMenu()
{
	cout << "\t\t********************�˵�*********************\n" << endl;
	cout << "\t\t 1.�鿴ÿ��ÿ�ֲ�Ʒ�����۶�" << endl;
	cout << "\t\t 2.�����۶������Ա����(����Ա����)" << endl;;
	cout << "\t\t 3.��ÿ�ֲ�Ʒ�����۶�Ӹߵ�������(��Ʒ���ź����۶�)" << endl;
	cout << "\t\t 4.���ͳ�Ʊ���" << endl;
	cout << "\t\t 5.����ǰһ�����������" << endl;
	cout << "\t\t 0.�˳�" << endl;
	cout << "\n\n\t\t*********************************************" << endl;
	cout << "��ѡ��(1-5):[ ]\b\b";
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
		case 1://�鿴ÿ��ÿ�ֲ�Ʒ�����۶�
			Scrip::detail();
			break;
		case 2://�����۶������Ա����(����Ա����)
			Scrip::seller_sort();
			break;
		case 3://��ÿ�ֲ�Ʒ�����۶�Ӹߵ�������(��Ʒ���ź����۶�)
			Scrip::product_sort();
			break;
		case 4://���ͳ�Ʊ���
			Scrip::total();
			break;
		case 5://����ǰһ�����������
		{
			Scrip::readdata();//��ȡ�ļ�
			Scrip::collating();//����Ϣ�������
		}
		break;
		case 0://�˳�ϵͳ
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			exit(0);
		default:
			cout << "�������!" << endl;
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
