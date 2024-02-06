#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "\n Enter a Number: ";
    cin >> a;
    for (b = 1; b <= a; b++)
    {
        cout << "\n"
             << b;
    }
    return 0;
}