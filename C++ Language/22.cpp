#include <iostream>
using namespace std;
int main()
{
    float unit, bill;
    cout << "unit: ";
    if (unit <= 200)
    {
        bill = 500;
    }
    else if (unit > 200 && unit <= 500)
    {
        bill = 8 * unit;
    }
    else
    {
        bill = 10 * unit;
    }
    cout << bill;
    return 0;
}