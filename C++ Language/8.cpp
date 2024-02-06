#include <iostream>
using namespace std;
int main()
{
    float s, t, u, Distance;
    cout << "\n Enter Inisial Valocity: ";
    cin >> s >> t >> u;
    Distance = s * u + 0.5 * t * u * u;
    cout << Distance;
    return 0;
}