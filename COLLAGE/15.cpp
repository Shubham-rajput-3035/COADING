#include <iostream>
using namespace std;
int main()
{
    int a, b, c, avg;
    cout << "Enter three number: ";
    cin >> a >> b >> c;
    avg = a + b + c / 3;
    if (avg > 60)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}