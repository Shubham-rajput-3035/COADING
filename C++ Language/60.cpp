#include <iostream>
using namespace std;
int main()
{
    char i, k, j;
    for (i = 'E'; i >= 'A'; i--)
    {
        for (k = 5; k >= i; k--)
            cout << " ";
        for (j = 'A'; j <= i; j++)
            cout << j;
        cout << endl;
    }
    for (i = 'B'; i <= 'E'; i++)
    {
        for (k = 5; k >= i; k--)
            cout << " ";
        for (j = 'A'; j <= i; j++)
            cout << j;
        cout << endl;
    }

    return 0;
}