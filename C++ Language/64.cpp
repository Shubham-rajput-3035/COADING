#include <iostream>
using namespace std;
int main()
{
    float r, c;
    int ch;
    cout << ("Enter radious: ");
    cin >> r;
    cout << ("\n1:Area of a circle");
    cout << ("\n2:Circumfrance of a circle");
    cout << ("\n Enter choice: ");
    cin >> ch;
    switch (ch)
    {
    case 1:
        c = 3.14 * r * r;
        cout << c;
        break;
    case 2:
        c = 2 * 3.14 * r;
        cout << c;
        break;
    default:
        cout << ("\n Wrong choice: ");
        break;
    }
}