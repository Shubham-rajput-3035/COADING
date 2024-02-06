// operator;

#include <iostream>
using namespace std;
int main()
{

    int num1 = 6;
    int num2 = 3;

    cout << num1 + num2 << endl;
    cout << num1 - num2 << endl;
    cout << num1 * num2 << endl;
    cout << num1 / num2 << endl;
    cout << num1 % num2 << endl;

    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;
    cout << (num1 >= num2) << endl;

    bool exp1 = true;
    bool exp2 = false;

    cout << (exp1 && exp2) << endl;
    cout << (exp1 || exp2) << endl;
    cout << (!exp1) << endl;

    num1 += 3;
    cout << num1 << endl;
    num2 -= 2;
    cout << num2 << endl;

    int num3 = 5;
    cout << (num3 << 1) << endl;
    cout << (num3 >> 1) << endl;

    int num4 = 8;
    cout << (num3 & num4) << endl;
    cout << (num3 | num4) << endl;

    int a = 4;
    cout << sizeof(a) << endl;

    char name = 'a';
    cout << sizeof(name) << endl;

    bool flag;
    a == name ? flag = true : flag = false;
    cout << flag << endl;

    cout << (&a) << endl;

    int c = 6;
    cout << (c++) << endl;

    // int b = 5;
    // cout << (--b) << endl;
    int b = c + 5;
    cout << (b) << endl;

    return 0;
}