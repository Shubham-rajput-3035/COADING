#include <iostream>
using namespace std;
int main()
{
    int a, b, add, sub;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b)
    {
        sub = a - b;
        cout << sub;
    }
    else
    {
        add = a + b;
        cout << add;
    }

    return 0;
}