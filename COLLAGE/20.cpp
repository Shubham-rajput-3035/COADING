#include <iostream>
using namespace std;
int main()
{
    int pur, pay, dis;
    cout << "Enter a number: ";
    cin >> pur;
    if (pur >= 15000)
    {
        dis = (pur * 40) / 100;
    }
    else if ((pur >= 10000) && (pur < 15000))
    {
        dis = (pur * 30) / 100;
    }
    else
    {
        dis = (pur * 20) / 100;
    }
    pay = pur - dis;
    cout << pay;

    return 0;
}