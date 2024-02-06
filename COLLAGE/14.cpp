#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;
    if (a > b)
    {
        cout << a;
    }
    if (b > a)
    {
        cout << b;
    }

    return 0;
}