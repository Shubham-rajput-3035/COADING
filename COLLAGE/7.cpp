#include <iostream>
using namespace std;
int main()
{
    int r, v, a;
    cout << "Enter radious: ";
    cin >> r;
    v = 4 / 3 * 3.14 * r * r * r;
    cout << "Volume of a sphare= " << v;
    a = 4 * 3.14 * r * r;
    cout << endl
         << "Surface area of a sphare= " << a;
    return 0;
}