#include <iostream>
using namespace std;
int main()
{
    float r, c;
    int ch;
    cout << ("Enter a numbers: ");
    cin >> r;
    cout << ("\n1:Dollar");
    cout << ("\n2:France");
    cout << ("\n3:Yen");
    cout << ("\n Enter choice: ");
    cin >> ch;

    switch (ch)
    {
    case 1:
        c = r / 78;
        cout << c;
        break;
    case 2:
        c = r / 82;
        cout << c;
        break;
    case 3:
        c = r / 84;
        cout << c;
        break;

    default:
        cout << ("\n Wrong choice: ");
        break;
    }
    return 0;
}