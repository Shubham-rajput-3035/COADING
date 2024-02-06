#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even Number";
    }
    if (n % 2 == 1)
    {
        cout << "Odd Number";
    }

    return 0;
}