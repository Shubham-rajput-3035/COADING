#include <stdio.h>
int main()
{
    float bs, ta, da, gs;
    printf("Enter basic Salary: ");
    scanf("%f", &bs);
    if (bs >= 10000)
    {
        ta = bs * 10 / 100;
        da = bs * 5 / 100;
    }
    else if (bs >= 8000 && bs < 10000)
    {
        ta = bs * 9 / 100;
        da = bs * 4 / 100;
    }

    else
    {
        ta = bs * 8 / 100;
        da = bs * 3 / 100;
    }
    gs = bs + ta + da;
    printf("Gross salary= %f", gs);

    return 0;
}