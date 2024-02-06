#include <stdio.h>
int main()
// for loop
{
    int i, n, sum = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    printf("%d", sum);
    // printf("\n");

    // while loop
    int j, m, s = 1;
    printf("\n Enter a number: ");
    scanf("%d", &m);
    j = 1;
    while (j <= m)
    {
        s = s * j;
        j++;
    }
    printf("%d", s);
    // printf("\n");
}