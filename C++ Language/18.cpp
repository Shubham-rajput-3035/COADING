#include <iostream>
using namespace std;
int main()
{
    int u, v, add, sub;
    cout << "\n Enter Two Numbers: ";
    cin >> u >> v;
    if (u > v)
    {
        add = u + v;
        cout << add;
    }
    else
    {
        sub = u - v;
        cout << sub;
    }
    return 0;
}