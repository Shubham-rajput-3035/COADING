#include <iostream>
using namespace std;
int main()
{
    int h, b, t, r;
    cout << "Enter heigh & base number: ";
    cin >> h >> b;
    if (h > b)
    {
        t = 0.5 * b * h;
        cout << t;
    }
    else
    {
        r = b * h;
        cout << endl
             << r;
    }

    return 0;
}