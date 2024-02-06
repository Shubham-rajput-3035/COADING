#include <iostream>
using namespace std;
int main()
{
    int e, f;
    cout << "\n Enter a Number: ";
    cin >> e;
    for (f = 2; f <= e; f = f + 2)
    {
        cout << endl
             << f;
    }
    return 0;
}