#include <iostream>
using namespace std;
int main()
{
    int n, s, c;
    cout << "Enter a number:  ";
    cin >> n;
    s = n * n;
    cout << "square= " << s;
    c = n * n * n;
    cout << endl
         << "cube= " << c;
    return 0;
}