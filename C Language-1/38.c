#include <stdio.h>
int main()
// for loop
{
    int i, n, X, sum = 0;
    printf("Enter a number: ");
    scanf("%d%d", &n, &X);
    for (i = 1; i <= n; i++)
    {
        sum = sum + X / i;
    }
    printf("%d", sum);
    // printf("\n");

    // while loop
    int j, m, x, s = 0;
    printf("\n Enter a number: ");
    scanf("%d%d", &m, &x);
    j = 1;
    while (j <= m)
    {
        s = s + x / j;
        j++;
    }
    printf("%d", s);
    // printf("\n");
}