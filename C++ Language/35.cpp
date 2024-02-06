#include <iostream>
using namespace std;
int main()
{
    int u, v;
    cout << "\n Enter a Number: ";
    cin >> v;
    for (u = 1; u <= v; u++)
    {
        cout << endl
             << u;
    }
    for (u = v - 1; u >= 1; u--)
    {
        cout << endl
             << u;
    }
    return 0;
}