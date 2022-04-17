/*
 *FileName: T6_61.cpp
 *Author:   Ziqi Yang
 *E-mail:   3273241847@qq.com
 *Date:     April 16th,2022
 *College:  Henu University
 *Function: 
 */

#include <iostream>
using namespace std;
int time3(int a, int b)
{
    int c = a * b;
    return c;
}
int time1(int a, int b)
{
    int c = a + b;
    return c;
}
int time2(int a, int b)
{
    int c = a - b;
    return c;
}
double time4(double a, double b)
{
    double c = a / b;
    return c;
}
double time5(double a, double b)
{
    double c = a * b + a - a / b;
    return c;
}
int main()
{
    double a, b;
    int k, m;
    int i = 1, j = 1;
    int d = 1, e = 0;
    int l;
    cin >> l;
    if (l == 1)
    {
        while (i <= 10)
        {
            while (d != e)
            {
                a = 0 + rand() % 9;
                b = 0 + rand() % 9;
                cout << "How much is " << "it" << endl;
                cout << "a+b";
                cin >> d;
                e = time1(a, b);
                if (e == d)
                {
                    i++;
                    k = 1 + rand() % 4;
                    switch (k)
                    {
                    case 1: cout << "Very good!"; break;
                    case 2: cout << "Excellent!"; break;
                    case 3: cout << "Nice woek!"; break;
                    case 4: cout << "Keep up the good work";
                    }
                }
                else
                {
                    while (e != d)
                    {
                        i++;
                        j++;
                        m = 1 + rand() % 4;
                        switch (m)
                        {
                        case 1: cout << " No,please try again." << endl; break;
                        case 2: cout << " Wrong.Try once more." << endl; break;
                        case 3: cout << " Don't give up!" << endl; break;
                        case 4: cout << " No.Keep trying." << endl;
                        }
                        cin >> d;
                    }
                    k = 1 + rand() % 4;
                    switch (k)
                    {
                    case 1: cout << "Very good!"; break;
                    case 2: cout << "Excellent!"; break;
                    case 3: cout << "Nice woek!"; break;
                    case 4: cout << "Keep up the good work";
                    }

                }

            }
        }

        if (j / i <= 0.25)
        {
            cout << " Congratulationgs you!";
        }
        else cout << "Please ask for help";
    }
    if (l == 2)
    {
        while (i <= 10)
        {
            while (d != e)
            {
                a = 0 + rand() % 9;
                b = 0 + rand() % 9;
                cout << "How much is " << " it " << endl;
                cout << "a-b";
                cin >> d;
                e = time2(a, b);
                if (e == d)
                {
                    i++;
                    k = 1 + rand() % 4;
                    switch (k)
                    {
                    case 1: cout << "Very good!"; break;
                    case 2: cout << "Excellent!"; break;
                    case 3: cout << "Nice woek!"; break;
                    case 4: cout << "Keep up the good work";
                    }
                }
                else
                {
                    while (e != d)
                    {
                        i++;
                        j++;
                        m = 1 + rand() % 4;
                        switch (m)
                        {
                        case 1: cout << " No,please try again." << endl; break;
                        case 2: cout << " Wrong.Try once more." << endl; break;
                        case 3: cout << " Don't give up!" << endl; break;
                        case 4: cout << " No.Keep trying." << endl;
                        }
                        cin >> d;
                    }
                    k = 1 + rand() % 4;
                    switch (k)
                    {
                    case 1: cout << "Very good!"; break;
                    case 2: cout << "Excellent!"; break;
                    case 3: cout << "Nice woek!"; break;
                    case 4: cout << "Keep up the good work";
                    }

                }

            }
        }

        if (j / i <= 0.25)
        {
            cout << " Congratulationgs you!";
        }
        else cout << "Please ask for help";
    }
    if (l == 3)
    {
        while (i <= 10)
        {
            while (d != e)
            {
                a = 0 + rand() % 9;
                b = 0 + rand() % 9;
                cout << "How much is " << "it" << endl;
                cout << "a*b";
                cin >> d;
                e = time3(a, b);
                if (e == d)
                {
                    i++;
                    k = 1 + rand() % 4;
                    switch (k)
                    {
                    case 1: cout << "Very good!"; break;
                    case 2: cout << "Excellent!"; break;
                    case 3: cout << "Nice woek!"; break;
                    case 4: cout << "Keep up the good work";
                    }
                }
                else
                {
                    while (e != d)
                    {
                        i++;
                        j++;
                        m = 1 + rand() % 4;
                        switch (m)
                        {
                        case 1: cout << " No,please try again." << endl; break;
                        case 2: cout << " Wrong.Try once more." << endl; break;
                        case 3: cout << " Don't give up!" << endl; break;
                        case 4: cout << " No.Keep trying." << endl;
                        }
                        cin >> d;
                    }
                    k = 1 + rand() % 4;
                    switch (k)
                    {
                    case 1: cout << "Very good!"; break;
                    case 2: cout << "Excellent!"; break;
                    case 3: cout << "Nice woek!"; break;
                    case 4: cout << "Keep up the good work";
                    }

                }

            }
        }

        if (j / i <= 0.25)
        {
            cout << " Congratulationgs you!";
        }
        else cout << "Please ask for help";
    }
    if (l == 4)
    {
        while (i <= 10)
        {
            while (d != e)
            {
                a = 0 + rand() % 9;
                b = 0 + rand() % 9;
                cout << "How much is " << a << " times " << b << endl;
                cout << "a/b";
                cin >> d;
                e = time4(a, b);
                if (e == d)
                {
                    i++;
                    k = 1 + rand() % 4;
                    switch (k)
                    {
                    case 1: cout << "Very good!"; break;
                    case 2: cout << "Excellent!"; break;
                    case 3: cout << "Nice woek!"; break;
                    case 4: cout << "Keep up the good work";
                    }
                }
                else
                {
                    while (e != d)
                    {
                        i++;
                        j++;
                        m = 1 + rand() % 4;
                        switch (m)
                        {
                        case 1: cout << " No,please try again." << endl; break;
                        case 2: cout << " Wrong.Try once more." << endl; break;
                        case 3: cout << " Don't give up!" << endl; break;
                        case 4: cout << " No.Keep trying." << endl;
                        }
                        cin >> d;
                    }
                    k = 1 + rand() % 4;
                    switch (k)
                    {
                    case 1: cout << "Very good!"; break;
                    case 2: cout << "Excellent!"; break;
                    case 3: cout << "Nice woek!"; break;
                    case 4: cout << "Keep up the good work";
                    }

                }

            }
        }

        if (j / i <= 0.25)
        {
            cout << " Congratulationgs you!";
        }
        else cout << "Please ask for help";
    }
    if (l == 5)
    {
        while (i <= 10)
        {
            while (d != e)
            {
                a = 0 + rand() % 9;
                b = 0 + rand() % 9;
                cout << "How much is it" << endl;
                cout << "a*b+a-a/b";
                cin >> d;
                e = time1(a, b);
                if (e == d)
                {
                    i++;
                    k = 1 + rand() % 4;
                    switch (k)
                    {
                    case 1: cout << "Very good!"; break;
                    case 2: cout << "Excellent!"; break;
                    case 3: cout << "Nice woek!"; break;
                    case 4: cout << "Keep up the good work";
                    }
                }
                else
                {
                    while (e != d)
                    {
                        i++;
                        j++;
                        m = 1 + rand() % 4;
                        switch (m)
                        {
                        case 1: cout << " No,please try again." << endl; break;
                        case 2: cout << " Wrong.Try once more." << endl; break;
                        case 3: cout << " Don't give up!" << endl; break;
                        case 4: cout << " No.Keep trying." << endl;
                        }
                        cin >> d;
                    }
                    k = 1 + rand() % 4;
                    switch (k)
                    {
                    case 1: cout << "Very good!"; break;
                    case 2: cout << "Excellent!"; break;
                    case 3: cout << "Nice woek!"; break;
                    case 4: cout << "Keep up the good work";
                    }

                }

            }
        }

        if (j / i <= 0.25)
        {
            cout << " Congratulationgs you!";
        }
        else cout << "Please ask for help";
    }
    return 0;
}
