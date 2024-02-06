#include <iostream>
using namespace std;
int main()
{
    int i = 1, x, s = 0, n;
    cout << ("Enter two numbers:");
    cin >> x >> n;
start:
    if (i <= n)
    {
        s = s + x * x / i * i;
        i++;
        goto start;
    }
    cout << s;
    return 0;
}