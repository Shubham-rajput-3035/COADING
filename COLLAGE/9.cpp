#include <iostream>
using namespace std;
int main()
{
    int ps, ns, d, pa;
    cout << "Enter three numbers: ";
    cin >> ps >> ns >> d;
    pa = ps * ns - (ps * ns * d / 100);
    cout << "payabule amount= " << pa;
    return 0;
}