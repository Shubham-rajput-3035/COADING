#include <iostream>
using namespace std;
int main()
{
    int m, n1, n, i, s = 0, ch;
    cout << ("Enter a numbers: ");
    cin >> n;
    cout << ("\n1:Prime number");
    cout << ("\n2:Palindrome Number");
    cout << ("\n Enter choice: ");
    cin >> ch;

    switch (ch)
    {
    case 1:
        for (i = 2; i <= n; i = i + 2)
            if (n % i == 0)
                s++;
        if (s == 2)
            cout << ("Prime number");
        else
            cout << ("Not Prime Number");
        break;
    case 2:
        n1 = n;
        while (n > 0)
        {
            m = n % 10;
            // reverce=r*10+m
            s = s * 10 + m;
            n = n / 10;
        }
        if (n1 == s)
            cout << ("Palindrome Number");
        else
            cout << ("Not Palindrome Number");
        break;
    default:
        cout << ("\n Wrong choice: ");
        break;
    }
}