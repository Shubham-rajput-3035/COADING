#include <stdio.h>
int main()
{
    int a, b;
    printf("\n Enter two numbers:");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("%d", a);
    }
    if (b > a)
    {
        printf("%d", b);
    }
    return 0;
}