#include <iostream>
using namespace std;
int main()
{
    int i = 1;
start:
    cout << endl
         << i;
    if (i < 100)
    {
        i++;
        goto start;
    }
    return 0;
}