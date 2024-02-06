#include <iostream>
using namespace std;
int main()
{
    int a, b, c, avg;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    avg = a + b + c / 3;
    if (avg >= 75)
    {
        cout << "Distinction";
    }
    else if (avg >= 50 && avg < 75)
    {
        cout << "Good";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}