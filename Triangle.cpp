
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Input three sides of Triangle: " << endl;
    cin >> a >> b >> c;

while(1) {
    if(a>0 && b>0 && c>0)
    {
        if(a+b>c && a+c>b && b+c>a)
        {
            if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b) //直角三角形
            {
                if(a==b||b==c||a==c)
                {
                    cout << a << ", " << b << " and " << c << "can construct a isosceles right triangle!" << endl;
                }
                else
                {
                    cout << a << ", " << b << " and " << c << "can construct a right triangle!" << endl;
                }
            }
            else //非直角三角形
            {
                if(a==b||b==c||a==c)
                {
                    if(a==b&&b==c&&a==c)
                        cout << "equilateral triangle!" << endl;
                    else
                    {
                        cout << a << ", " << b << " and " << c << "can construct a isosceles triangle!" << endl;
                    }
                }
                else
                {
                    cout << a << ", " << b << " and " << c << "can construct a normal triangle!" << endl;
                }
            }
        }
        else
        {
            cout << a << ", " << b << " and " << c << "can't construct a triangle!" << endl;
        }
    }
    else
    {
        cout << a << ", " << b << " and " << c << "can't construct a triangle!" << endl;
    }

    cout << "Input three sides of Triangle: " << endl;
    cin >> a >> b >> c;
}
    return 0;
}
