#include <iostream>
using namespace std;
int main()
{

    int g;
    cout << "\n Enter A Numbers: ";
    cin >> g;
    if (g < 0)
    {
        cout << "Negetive Number";
    }
    else if (g > 0)
    {
        cout << "Positive Number";
    }
    else
    {
        cout << "Zero";
    }
    return 0;
}