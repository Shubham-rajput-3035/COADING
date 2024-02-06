#include <iostream>
using namespace std;
int main()
{
    int m, n, o;
    cout << "\n Enter two Numbers: ";
    cin >> n >> o;
    for (m = 1; m <= n; m = m + 2)
    {
        cout << endl
             << m / o;
    }
    return 0;
}