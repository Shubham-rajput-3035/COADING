#include <iostream>
using namespace std;
int main()
{
    float r1, h, volume;
    cout << "\n Enter radious and hight= ";
    cin >> r1 >> h;
    volume = 3.14 * r1 * r1 * h;
    cout << volume;
    return 0;
}