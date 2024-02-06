#include <iostream>
using namespace std;
int main()
{
    int i, n, x, s = 0;
    cout << "Enter two numbers";
    cin >> x >> n;
    for (i = 1; i <= n; i = i + 2)
        s = s + x / i;
    cout << s;
    return 0;
}