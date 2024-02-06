#include <stdio.h>
int main()
{
    float r, h, v;
    printf("Enter redious & hight= ");
    scanf("%f%f", &r, &h);
    v = 3.14 * r * r * h;
    printf("\n Volume of cylinder= %f", v);
    return 0;
}