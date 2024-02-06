#include <iostream>
using namespace std;
int main()
{
    int c, d;
    cout << "\n Enter a Number: ";
    cin >> c;
    for (d = c; d >= 1; d--)
    {
        cout << endl
             << d;
    }
    return 0;
}