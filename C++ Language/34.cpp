#include <iostream>
using namespace std;
int main()
{
    int s, t;
    cout << "\n Enter a Number: ";
    cin >> t;
    for (s = 1; s <= 10; s++)
    {
        cout << endl
             << s * t;
    }
    return 0;
}