#include <stdio.h>
int main()
{
    float unit, bill;
    printf("Enter value of Electric Unit: ");
    scanf("%f", &unit);
    if (unit <= 200)
    {
        bill = 500;
        printf("bill= %f", bill);
    }
    else if (unit > 200 && unit <= 500)
    {
        bill = unit * 8;
        printf("bill= %f", bill);
    }
    else
    {
        bill = unit * 10;
        printf("bill= %f", bill);
    }

    return 0;
}