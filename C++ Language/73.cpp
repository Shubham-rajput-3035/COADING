#include <iostream>
using namespace std;
int main()
{
    float r, a;
    float area(float);
    cout << ("Enter a Number:");
    cin >> r;
    a = area(r);
    cout << a;
}
float area(float r)
{
    float a;
    a = 3.14 * r * r;
    return (a);
}