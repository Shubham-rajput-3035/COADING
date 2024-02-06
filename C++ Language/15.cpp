#include <iostream>
using namespace std;
int main()
{
    int x, y, z, avg;
    cout << "\n Enter Three Numbers: ";
    cin >> x >> y >> z;
    avg = x + y + z / 3;
    if (avg > 60)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }
    return 0;
}