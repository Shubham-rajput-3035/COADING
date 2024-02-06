#include <stdio.h>
int main()
{
    float pa, d, PA;
    printf("\n Enter Purchase Amount: ");
    scanf("%f", &pa);
    if (pa >= 15000)
    {
        d = pa * 40 / 100;
    }
    else if (pa >= 10000 && pa < 15000)
    {
        d = pa * 30 / 100;
    }
    else
    {
        d = pa * 20 / 100;
    }
    PA = pa - d;
    printf("%f", PA);
    return 0;
}