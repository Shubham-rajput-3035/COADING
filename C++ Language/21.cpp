#include <iostream>
using namespace std;
int main()
{
    float BS, GS, TA, DA;
    cout << "\n Enter Basic Salary: ";
    cin >> BS;
    if (BS >= 10000)
    {
        TA = BS * 10 / 100;
        DA = BS * 5 / 100;
    }
    else if (10000 >= 8000)
    {
        TA = BS * 9 / 100;
        DA = BS * 4 / 100;
    }
    else
    {
        TA = BS * 8 / 100;
        DA = BS * 3 / 100;
    }
    GS = BS + TA + DA;
    cout << GS;
    return 0;
}