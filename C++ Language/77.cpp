#include <iostream>
using namespace std;
int main()
{
    int n;
    void prime(int);
    cout << ("Enter a Number:");
    scanf("%d", &n);
    prime(n);
}
void prime(int n)
{
    int i, c = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c == 2)
        cout << ("prime Number");
    else
        cout << ("Not prime Number");
}