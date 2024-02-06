#include <iostream>
using namespace std;
int main()
{
    float h, b, t, r;
    cout << "Enter hight and bases= ";
    cin >> h >> b;
    t = b * h;
    r = 0.5 * h * b;
    cout << t << r;
    return 0;
}