#include <iostream>
using namespace std;
int main()
{
    float ps, ns, dis, PA;
    cout << "\n Enter ps: ";
    cout << "\n Enter ns: ";
    cout << "\n Enter dis: ";
    cin >> ps >> ns >> dis;
    PA = ps * ns - ps * ns * dis / 100;
    cout << PA;
    return 0;
}