#include <iostream>
using namespace std;
int main()
{
    int a, b, c, ch;
    cout << ("Enter two numbers: ");
    cin >> a >> b;
    cout << ("\n1:Add");
    cout << ("\n2:Sub");
    cout << ("\n3:Multi");
    cout << ("\n Enter choice: ");
    cin >> ch;

    switch (ch)
    {
    case 1:
        c = a + b;
        cout << c;
        break;
    case 2:
        c = a - b;
        cout << c;
        break;
    case 3:
        c = a * b;
        cout << c;
        break;

    default:
        cout << ("\n Wrong choice: ");
        break;
    }
}