#include <iostream>
using namespace std;
int main()
{
    int p, q, r;
    cout << "\n Enter two Numbers: ";
    cin >> p >> q;
    for (r = 1; r <= p; r++)
    {
        cout << endl
             << q * q / r * r;
    }
    return 0;
}