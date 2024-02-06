#include <stdio.h>
int main()
{
    int a, b, sub, add;
    printf("\n Enter two numbers:");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        sub = a - b;
        printf("%d", sub);
    }
    else
    {
        add = a + b;
        printf("%d", add);
    }
    return 0;
}