#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Radious= ");
    scanf("%d", &r);
    c = 3.14 * r * r;
    printf("\n Area of a circle= %d", c);
    return 0;
}