#include <stdio.h>
int main()
// for loop
{
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            sum++;
    }
    if (sum == 2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }

    // while loop
    int j, m, s = 0;
    printf("\n Enter a number: ");
    scanf("%d", &m);
    j = 1;
    while (j <= m)
    {
        if (m % j == 0)
            s++;
        j++;
    }
    if (s == 2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
}