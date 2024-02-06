#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0)
    {
        cout << "Positive Number";
    }
    if (n < 0)
    {
        cout << "Negetive Number";
    }
    if (n == 0)
    {
        cout << "zero";
    }

    return 0;
}