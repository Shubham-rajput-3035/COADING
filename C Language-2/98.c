#include <stdio.h>
int main()
{
    int h, b, a;
    int area(int, int);
    printf("Enter two numbers: ");
    scanf("%d%d", &h, &b);
    a = area(h, b);
    printf("%d", a);
}
int area(int h, int b)
{
    int a;
    a = h * b;
    return (a);
}