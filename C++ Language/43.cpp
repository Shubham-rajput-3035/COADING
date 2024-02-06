#include <iostream>
using namespace std;
int main()
{
    int n, m, s = 0;
    cout << "Enter a number";
    cin >> n;
    while (n > 0)
    {
        m = n % 10;
        if (m % 2 == 0)
            s = s + m;
        n = n / 10;
    }
    cout << s;
    return 0;
}