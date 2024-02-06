#include <iostream>
using namespace std;
int main()
{
    int j, k, l;
    cout << "\n Enter two Numbers: ";
    cin >> j >> l;
    for (k = 1; k <= j; k++)
    {
        cout << endl
             << l / k;
    }
    return 0;
}