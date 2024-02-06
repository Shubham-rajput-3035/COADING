#include <stdio.h>
int main()
{
    float a, r, v;
    printf("Enter redious: ");
    scanf("%f", &r);
    v = 4 / 3 * 3.14 * r * r * r;
    printf("\n Volume of a cylinder= %f", v);
    a = 4 * 3.14 * r * r;
    printf("\n Surface area of a sphere=%f", a);
    return 0;
}