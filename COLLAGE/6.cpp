#include <iostream>
using namespace std;
int main()
{
    int r, h, v;
    cout << "Enter radious and hight: ";
    cin >> r >> h;
    v = 3.14 * r * r * h;
    cout << v;
    return 0;
}