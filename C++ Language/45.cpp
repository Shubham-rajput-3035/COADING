#include <iostream>
using namespace std;
int main()
{
    int n, m, r = 0;
    cout << "Enter a number";
    cin >> n;
    while (n > 0)
    {
        m = n % 10;
        r = r * 10 + m;
        n = n / 10;
    }
    cout << r;
    return 0;
}