#include<iostream>
using namespace std;
int main()
{
    int a, b, c, g;
    int greatest(int, int, int);
    cout << ("Enter three Number:");
    cin >> a >> b >> c;
    g = greatest(a, b, c);
    cout << g;
}
int greatest(int a, int b, int c)
{
    if (a > b && a > c)
        return (a);
    if (b > a && b > c)
        return (b);
    if (c > a && c > b)
        return (c);
}