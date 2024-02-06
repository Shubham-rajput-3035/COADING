#include <stdio.h>
int main()
{
    float h, b, t, r;
    printf("\n Enter two numbers:");
    scanf("%f%f", &h, &b);
    if (h > b)
    {
        t = 0.5 * h * b;
        printf("%f", t);
    }
    else
    {
        r = h * b;
        printf("%f", r);
    }
    return 0;
}