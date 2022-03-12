/*
 * FileName: Demo0309.cpp
 * Author: Yonghang Yan
 * E-mail: feifanyyh@163.com
 * Date: Mar 9th, 2022
 * Function: Demonstrating the DataType of C++
 */

 /*
    C++�������ͷ�Ϊ�������ͣ��ڽ����ͣ�����չ����
    �������ͣ�bool��char��int��float,double, long, long long, short, signed, unsigned, long double
    �������ͣ�������һ�����������Ȼ�����Ӧ���ݵķ�ʽ�Լ�һ�鶨���ڸ����ݼ��ϵĻ���������
    �����������ͣ��Ϳ��Զ���������͵ı��������Դ洢�������͵�����
    ��������ĸ�ʽ�� �������� ������(=��ֵ);
  */

 #include <iostream>
 #include <limits>
 #include <float.h>
 #include <locale>

 using namespace std;

 int main()
 {
      /*
      *  C++��ѡ��ṹ
      1, if��ѡ�ṹ
      if(���ʽ��
      {
         if�����
      }

      2��if˫ѡ�ṹ
      if(���ʽ)
      {
        �߼�����1��
      }
      else
      {
        �߼�����2��
      }
      */

      /*
       * C++��ѭ���ṹ:���е�ѭ����������Ҫ�أ���ֵ��ѭ���Ƿ�ִ�е��ж�������ѭ���壬�޸�ѭ���Ƿ������ֵ
       1��while
       while(���ʽ)
        {
            ѭ���壻
        }

       */
    int weather;
    cout << "Input the weather of today: ";
    cin >> weather;

    int choice=1;

     while(choice) // while�ṹ����ѡ��ṹ������Ƕ��
     {

//         if(weather==1)
//            cout << "let's go climbing the XiangShang mountain!" << endl;
//         if(weather==0)
//            cout << "let's watch movie at home!" << endl;
        if(1==weather) // classic bug ==  =
            cout << "let's go climbing the XiangShang mountain!" << endl;
        else // �����׳���else����������
            cout << "let's watch movie at home!" << endl;

        cout << "Do you want to play this app again?(if you want input 1,or else input 0): ";
        cin >> choice;

        if(choice==1)
        {
            cout << "Input the weather of today: ";
            cin >> weather;
        }
        // �ѵ�
        if(choice==0)
            cout << "Game over, see you again!" << endl;
    }



#if 0
     cout << "bool start***************************************************";
     bool b1; //����������
     bool b2=true; // �����Ķ���
     cout << "b1 = " << b1 << endl;
     cout << "b2 = " << b2 << endl;
     cout << "The address of variable b1 is : " << &b1 << endl; // &��������ʾȡ��һ�������ĵ�ַ��&����ȡ��ַ��
     cout << "The width of variable b1 is : " << sizeof(bool) << endl; //sizeof��ʾĳ��������ռ���ڴ��ַ���,�����Ų���ʡ��
     cout << "The width of variable b1 is : " << sizeof b1 << endl;
     cout << "bool end***************************************************";

     cout << "\n\nchar start***************************************************";
     char c1;
     char c2='c';
     cout << "c1 = " << c1 << endl;
     cout << "c2 = " << c2 << endl;

     // where is the bug? how to fix it.
     cout << "The address of variable c2 is : " << (void *)&c2 << endl; // &��������ʾȡ��һ�������ĵ�ַ��&����ȡ��ַ��
     cout << "The width of variable c1 is : " << sizeof(char) << endl; //sizeof��ʾĳ��������ռ���ڴ��ַ���,�����Ų���ʡ��
     cout << "The width of variable c1 is : " << sizeof c1 << endl;
     cout << "char end***************************************************";

     cout << "\nint begin***************************************************";
     int n1;
     int n2=2;
     cout << "n1 = " << n1 << endl;
     cout << "n2 = " << n2 << endl;
     cout << "The address of variable n2 is : " << &n2 << endl; // &��������ʾȡ��һ�������ĵ�ַ��&����ȡ��ַ��
     cout << "The width of variable n1 is : " << sizeof(int) << endl; //sizeof��ʾĳ��������ռ���ڴ��ַ���,�����Ų���ʡ��
     cout << "The width of variable n1 is : " << sizeof n1 << endl;
     cout << "The biggest value of datatype int is " << INT_MAX << endl;
     cout << "The smallest value of datatype int is " << INT_MIN << endl;
     cout << "\nint end***************************************************";

     float f1;
     float f2=1.1;
     cout << "f1 = " << f1 << endl;
     cout << "f2 = " << f2 << endl;
     cout << "The address of variable f2 is : " << &f2 << endl; // &��������ʾȡ��һ�������ĵ�ַ��&����ȡ��ַ��
     cout << "The width of variable f1 is : " << sizeof(float) << endl; //sizeof��ʾĳ��������ռ���ڴ��ַ���,�����Ų���ʡ��
     cout << "The width of variable f1 is : " << sizeof f1 << endl;
     cout << "The biggest value of datatype float is " << FLT_MAX << endl;
     cout << "The smallest value of datatype float is " << FLT_MIN << endl;

     double d1;
     double d2=2.2;
     cout << "d1 = " << d1 << endl;
     cout << "d2 = " << d2 << endl;
     cout << "The address of variable d2 is : " << &d2 << endl; // &��������ʾȡ��һ�������ĵ�ַ��&����ȡ��ַ��
     cout << "The width of variable d1 is : " << sizeof(double) << endl; //sizeof��ʾĳ��������ռ���ڴ��ַ���,�����Ų���ʡ��
     cout << "The width of variable d1 is : " << sizeof d1 << endl;
     cout << "The biggest value of datatype double is " << DBL_MAX << endl;
     cout << "The smallest value of datatype double is " << DBL_MIN << endl;
     cout << "The biggest value of datatype double is " << numeric_limits<double>::max() << endl;
     cout << "The smallest value of datatype double is " << numeric_limits<double>::min() << endl;

  #endif


     return 0;
 }

