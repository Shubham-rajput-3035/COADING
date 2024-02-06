#include <iostream>
using namespace std;
int main()
{
    int n, i, s = 0, ch;
    cout << ("Enter a numbers: ");
    cin >> n;
    cout << ("\n1:Even number");
    cout << ("\n2:Odd Number");
    cout << ("\n Enter choice: ");
    cin >> ch;

    switch (ch)
    {
    case 1:
        for (i = 2; i <= n; i = i + 2)
            s = s + i;
        cout << s;
        break;
    case 2:
        for (i = 1; i <= n; i = i + 2)
            s = s + i;
        cout << s;
        break;
    default:
        cout << ("\n Wrong choice: ");
        break;
    }
}