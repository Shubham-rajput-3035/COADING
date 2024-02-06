#include <iostream>
using namespace std;
int main()
{
    int n, n1, m, s = 0;
    cout << "Enter a number";
    cin >> n;
    n1 = n;
    while (n > 0)
    {
        m = n % 10;
        s = s * 10 + m;
        n = n / 10;
    }
    if (n1 == s)
        cout << "Palinderome";
    else
    {
        cout << "Not Palinderome";
    }

    return 0;
}