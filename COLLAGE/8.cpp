#include <iostream>
using namespace std;
int main()
{
    int u, t, a, d;
    cout << "Enter three numbers: ";
    cin >> u >> t >> a;
    d = u * t + 0.5 * a * t * t;
    cout << "Distance=" << d;
    return 0;
}