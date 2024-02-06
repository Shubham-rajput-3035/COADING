#include <iostream>
using namespace std;
int main()
{
    int n, m, s = 0;
    cout << "Enter a number";
    cin >> n;
    m = n % 10;
    while (n > 9)
    {
        n = n / 10;
    }
    cout << m + n;
    return 0;
}