#include <iostream>
using namespace std;
int main()
{
    int t, r, triangle, rectangle;
    cout << "\n Enter Hight and Base=";
    cin >> t >> r;
    if (t > r)
    {
        triangle = 1 / 2 * t * r;
        cout << triangle;
    }
    else
    {
        rectangle = t * r;
        cout << rectangle;
    }
    return 0;
}