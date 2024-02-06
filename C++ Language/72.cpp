#include <iostream>
using namespace std;
int main()
{
    int i = 1, s = 0, n;
    cout << ("Enter a Number: ");
    cin >> n;
start:
    while (i < n)
    {
        if (n % i == 0)

            s++;
        i++;
        goto start;
    }
    if (s == 2)
        cout << ("Prime Number");
    else
        cout << ("Not Prime Number");
}