#include <iostream>
using namespace std;

int main()
{
    float a = 45.5;
    long double b = 34.3;
    float c = 45.5F;
    long double d = 34.3L;

    // Here F and L is used to specify the data type ,it helps to reduce overloading problems
    cout << "THE SIZE OF 45.5 IS " << sizeof(a) << endl;
    cout << "THE SIZE OF 34.3 IS " << sizeof(b) << endl;
    cout << "THE SIZE OF 45.5F IS " << sizeof(c) << endl;
    cout << "THE SIZE OF 34.3L IS " << sizeof(d) << endl;

    // .......................REFRENCE VARIABLES..........................
    int a1 = 7;
    int &x = a1;
    cout << "THE VALUE OF a1 is " << a1 << " x is " << x << endl; // x is refrence to a1

    //........................TYPE CASTING .................................
    // Used to convert one data type into another.
    int a2 = 45;
    float a3 = 45.7;
    cout << "THE VALUE OF a2 IS " << float(a2) << endl;
    cout << "THE VALUE OF a3 IS " << int(a3) << endl;
    cout << "THE VALUE OF a3 IS " << (int)a3 << endl;

    //..............OPERATOR PRECEDENCE......................................
    /*Precedence means which will get evaluate first
    but if operators have same precedence then asociativity defines it's evaluation ,example is given below*/
    int w = 45, r = 10;
    int p = (w * p) + r; // Here asociativity is from left to right
    cout << "THEN VALUE OF P IS " << p << endl;

    // .................BASIC ARITHMETIC CALCULATOR...........................
    double a4, a5;
    char ch;
    cout<<"A BASIC CALCULATOR FOR 2 NUMBERS"<<endl;
    cout << "ENTER 1 NUMBER  " << endl;
    cin >> a4;
    cout << "OPERATION(CHOOSE +  - * / ) YOU WANT TO PERFORM " << endl;
    cin>>ch;
    cout << "ENTER SECOND NUMBER " << endl;
    cin >> a5;

    switch (ch)
    {
    case '+':
        cout << a4 << " + " << a5 << " = " << a4 + a5 << endl;
        break;
    case '-':
        cout << a4 << " - " << a5 << " = " << a4 - a5 << endl;
        break;
    case '*':
        cout << a4 << " * " << a5 << " = " << a4 * a5 << endl;
        break;
    case '/':
        cout << a4 << " / " << a5 << " = " << a4 / a5 << endl;
        break;

    default:
        cout << "INVALID OUTPUT " << endl;
        break;
    }

    return 0;
}