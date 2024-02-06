#include <iostream>
using namespace std;
int main()
{
    int i = 1, s = 0, n;
    cout << ("Enter a number:");
    cin >> n;
start:
    if (i <= n)
    {
        s = s + i;
        i++;
        goto start;
    }
    cout << s;
    return 0;
}