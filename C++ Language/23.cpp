#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cout << "\n Enter Three Numbers: ";
    cin >> A >> B >> C;
    if (A > 50)

        if (B > 50)

            if (C > 50)

                cout << "PASS";

            else

                cout << "FAIL";
        else

            cout << "FAIL";
    else
        cout << "FAIL";
    return 0;
}