#include <iostream>
using namespace std;
int main()
{
    int i, n, s = 0;
    cout << "Enter a number";
    cin >> n;
    for (i = 1; i <= n; i++)
        if (n % i == 0)
        {
            s++;
        }
    if (s == 2)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not Prime Number";
    }

    return 0;
}