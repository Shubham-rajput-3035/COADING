#include <iostream>
using namespace std;
int main()
{
    float PA, Dis, Pay;
    cout << "\n Enter Purchase Amount: ";
    cin >> PA;
    if (PA >= 1500)
    {
        Dis = (PA * 40 / 100);
    }
    else if (1500 >= 1000)
    {
        Dis = (PA * 30 / 100);
    }
    else
    {
        Dis = (PA * 20 / 100);
    }
    Pay = PA - Dis;
    cout << Pay;
    return 0;
}