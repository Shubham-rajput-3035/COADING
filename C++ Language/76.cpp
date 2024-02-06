#include <iostream>
using namespace std;
int main()
{
    int n, s;
    int factoriyal(int);
    cout << ("Enter a Number:");
    cin >> n;
    s = factoriyal(n);
    cout << s;
}
int factoriyal(int n)
{
    int i, s = 1;
    for (i = 1; i <= n; i++)
        s = s * i;
    return (s);
}