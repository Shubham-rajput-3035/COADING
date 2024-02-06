#include <stdio.h>
int main()
{
    int i = 1, x, s = 0, n;
    printf("Enter two numbers:");
    scanf("%d%d", &x, &n);
start:
    if (i <= n)
    {
        s = s + x * x / i * i;
        i++;
        goto start;
    }
    printf("%d", s);
    return 0;
}