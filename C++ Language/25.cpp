#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "\n Enter value of Year: ";
    cin >> year;
    if (year / 100 == 0)
        if (year / 400 == 0)
        {
            cout << "Leap Year";
        }
        else
            cout << " Not Leap Year";
    else if (year / 4 == 0)
        cout << "Leap Year";
    else
        cout << "Not Leap Year";
    return 0;
}