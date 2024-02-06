#include <iostream>
using namespace std;
int main()
{
    int n, s;
    int sum(int);
    cout << ("Enter a Number:");
    cin >> n;
    s = sum(n);
    cout << s;
}
int sum(int n)
{
    int i, s = 0;
    for (i = 1; i <= n; i++)
        s = s + i;
    return (s);
}