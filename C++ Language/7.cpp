#include <iostream>
using namespace std;
int main()
{
    float r, vol, area;
    cout << "\n Enter Radious: ";
    cin >> r;
    vol = 4 / 3 * 3.14 * r * r;
    area = 4 * 3.14 * r * r;
    cout << vol << endl
         << area;
    return 0;
}