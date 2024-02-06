#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cout << "Enter a number: ";
    cin >> n;
    s = n / 2 * (1 + n);
    cout << "sum of series= " << s;
    return 0;
}