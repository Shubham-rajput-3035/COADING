#include <iostream>
using namespace std;
int main()
{
    int h, b, t, r;
    cout << "Enter hight and base: ";
    cin >> h >> b;
    t = 0.5 * b * h;
    cout << "Area of a triangle= " << t;
    r = b * h;
    cout << endl
         << "Area of a rectangle= " << r;
    return 0;
}