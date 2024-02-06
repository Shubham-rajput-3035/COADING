#include <stdio.h>
int main()
{
    int h, b, t, r;
    printf("Enter hight and base= ");
    scanf("%d%d", &h, &b);
    t = 0.5 * h * b;
    printf("\n Area of triangle= %d", t);
    r = h * b;
    printf("\n Area of rectangle= %d", r);
    return 0;
}