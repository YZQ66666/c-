/*
 *FileName: T4_37.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     Mar 5th,2022
 *College:  Henu University
 *Function: �����˿�����
 */
#include <iostream>
using namespace std;
int main()
{
    double a, b, f;   //aΪ��ʼ������bΪ������
    cin >> a >> b;
    int i = 1, j = 1;
    for (; i <= 75; i++)
    {
        cout << "��" << i << "�� ";
    }
    cout << endl;
    double k = 1;
    double o = 1;
    double m = a;
    double c = a, d = a;  //cΪ����Ԥ�ڵ��˿�
    for (; j <= 75; j++)
    {
        while (k <= j)
        {
            c = c * (1 + b);
            k++;
        }
        cout << c << " ";
        c = a;
        k = 1;
    }
    cout << endl;
    for (double p = 1; p <= 75; p++)  //fΪ�����˿�������
    {
        while (o <= p)
        {
            d = d * (1 + b);
            o++;
        }
        f = d - m;
        m = d;
        d = a;
        cout << f << " ";
        o = 1;
    }

    return 0;
}
