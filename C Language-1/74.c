#include <stdio.h>
int main()
{
    int a, b, c, g;
    int greatest(int, int, int);
    printf("Enter three Number:");
    scanf("%d%d%d", &a, &b, &c);
    g = greatest(a, b, c);
    printf("%d", g);
}
int greatest(int a, int b, int c)
{
    if (a > b && a > c)
        return (a);
    if (b > a && b > c)
        return (b);
    if (c > a && c > b)
        return (c);
}