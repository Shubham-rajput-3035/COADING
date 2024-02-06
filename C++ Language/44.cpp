#include <iostream>
using namespace std;
int main()
{
    int n, m, s = 0, c = 0, avg;
    cout << "Enter a number";
    cin >> n;
    while (n > 0)
    {
        m = n % 10;
        if (m % 2 == 1)
        {
            c++;
            s = s + m;
        }
        n = n / 10;
    }
    cout << s / c;
    return 0;
}