#include <iostream>
using namespace std;
int main()
{
    // Area and Perimeter of Rectangle
    int l, b, a, p;
    cout << " Enter value of length and breath: ";
    cin >> l >> b;
    a = l * b;
    p = 2 * (l + b);
    cout << "Area= " << a;
    cout << "perimeter= " << p;

    // Area and Circumfrance of Circle
    float r, area, cir;
    cout << " Enter radious: ";
    cin >> r;
    area = 3.14 * r * r;
    cir = 2 * 3.14 * r;
    cout << " Area of a Circle= " << area;
    cout << " Circumfrance of a Circle= " << cir;

    // Input Amount and discount 10% Find Net Payable amount
    float amount, dis;
    cout << " Enter purching Amount: ";
    cin >> amount;
    dis = (amount * 10) / 100;
    cout << " purchasing amounts= " << amount;
    cout << " Discount= " << dis;
    cout << "Net Payable= " << amount - dis;

    // Input Five subjects and Find total marks and its percentages
    int g, f, c, d, e, total;
    float per;
    cout << " Enter marks of five Subjects: ";
    cin >> g >> f >> c >> d >> e;
    total = g + f + c + d + e;
    per = (total * 100) / 500;
    cout << "Total Marks= " << total;
    cout << "percantage= " << per;

    // check the number Even/Odd
    int k;
    cout << " Enter Number: ";
    cin >> k;
    if (k / 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
    //  Max Two Numbers
    int R, S;
    cout << " Enter Two Numbers: ";
    cin >> R >> S;
    if (R > S)
    {
        cout << "Max Number" << R;
    }
    else
    {
        cout << "Max Number" << S;
    }

    //  Min two Numbers
    int U, V;
    cout << " Enter Two Numbers: ";
    cin >> U >> V;
    if (U < V)
    {
        cout << "Min Number" << U;
    }
    else
    {
        cout << "Min Number" << V;
    }

    // Input number is Positive/Negetive and Zero
    int A;
    cout << " Enter Number: ";
    cin >> A;
    if (A == 0)
        cout << "Zero";
    else if (A > 0)
        cout << "Positive Number";
    else
        cout << "Negetive Number";

    // Input three numbers and Find Greatest
    int K, Q, T;
    cout << " Enter Three Numbers: ";
    cin >> K >> Q >> T;
    if ((K > Q) && (K > T))
    {
        cout << "Max Number" << K;
    }
    else if ((Q > K) && (Q > T))
    {
        cout << "Max Number" << Q;
    }
    else
    {
        cout << "Max Number" << T;
    }

    // Input three numbers and Find Smallest
    cout << " Enter Three Numbers: ";
    cin >> K >> Q >> T;
    if ((K < Q) && (K < T))
    {
        cout << "Min Number" << K;
    }
    else if ((Q < K) && (Q < T))
    {
        cout << "Min Number" << Q;
    }
    else
    {
        cout << "Min Number" << T;
    }
    return 0;
}