#include <iostream>
using namespace std;
int main()
{
    int P, Q, R;
    cout << "\n Enter Three Numbers: ";
    cin >> P >> Q >> R;
    if (P > Q)

        if (P > R)
            cout << P;
        else
            cout << R;
    else if (Q > R)
        cout << Q;
    else
        cout << R;
    return 0;
}