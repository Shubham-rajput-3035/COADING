#include <iostream>
using namespace std;
int main()
{
    float PA, time, rate, SI;
    cout << "\n Enter Principal Amount: ";
    cout << "\n Enter time: ";
    cout << "\n Enter rate: ";
    cin >> PA >> time >> rate;
    SI = PA * time * rate;
    cout << SI;
    return 0;
}