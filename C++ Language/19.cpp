#include <iostream>
using namespace std;
int main()
{
    int j, k, l, avge;
    cout << "\n Enter Three Numbers: ";
    cin >> j >> k >> l;
    avge = j + k + l / 3;
    if (avge >= 75)
    {
        cout << "Distinition";
    }
    else if (75 >= 50)
    {
        cout << "Good";
    }
    else
    {
        cout << "Fail";
    }
    return 0;
}