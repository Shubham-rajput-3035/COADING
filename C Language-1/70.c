#include <stdio.h>
int main()
{
    int i = 1, s = 0, n;
    printf("Enter a number:");
    scanf("%d", &n);
start:
    if (i <= n)
    {
        s = s + i;
        i++;
        goto start;
    }
    printf("%d", s);
    return 0;
}