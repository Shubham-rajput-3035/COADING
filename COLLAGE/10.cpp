#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cout << "Enter a number:  ";
    cin >> n;
    s = n * n;
    cout << "Square of a number= " << s;

    int pa, dis;
    cout << endl
         << "Enter purchase amount: ";
    dis = (pa * 20) / 100;
    cout << endl
         << "purchase Amount= " << dis;
    return 0;
}