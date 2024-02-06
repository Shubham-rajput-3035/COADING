#include <iostream>
using namespace std;
int main()
{
    // print from 1 to 100
    int i;
    i = 1;
    while (i <= 100)
    {
        cout << i << "\n";
        i = i + 1;
    }

    // print from 1 to n
    int I, n;
    I = 1;
    cout << "Enter value of n: ";
    cin >> n;
    while (I <= n)
    {
        cout << I << "\n";
        I = I + 1;
    }
    // print from 100 to 1
    int a;
    a = 100;
    while (a >= 1)
    {
        cout << a << "\n";
        a = a - 1;
    }

    // print from 2,4,6,8,..............200.
    int b;
    b = 2;
    while (b <= 200)
    {
        cout << b << "\n";
        b = b + 2;
    }

    // print from 1 to 100 using do while loop
    int c;
    c = 1;
    do
    {
        cout << c << "\n";
        c = c + 1;
    } while (i <= 100);

    // print from 1,2,3,4,5,......100(using for loop).
    int e;
    for (e = 1; e <= 10; e++)
    {
        cout << e;
    }

    // write a programe to find sum of frist 'n' natural number?(using while statement)
    int g, h, sum1;
    cout << "\n Enter Number";
    cin >> h;
    g = 1;
    while (g <= h)
    {
        sum1 = sum1 + g;
        g = g + 1;
    }
    cout << "\n sum: " << sum1;

    // write a programe to find sum of frist 'n' natural number?(using loop statement)
    int d, m, sum = 0;
    cout << "Enter number:  ";
    cin >> m;
    for (d = 1; d <= 100; d++)
    {
        sum = sum + d;
        cout << "\n sum= " << sum;
    }

    return 0;
}