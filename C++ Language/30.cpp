
#include <iostream>
using namespace std;
int main()
{
    int g, h;
    cout << "\n Enter a Number: ";
    cin >> g;
    for (h = 1; h <= g; h++)
    {
        cout << endl
             << h * h;
    }
    return 0;
}