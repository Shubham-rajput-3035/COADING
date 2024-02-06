#include <stdio.h>
int main()
// for loop
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
        // printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        printf("%d", i);
    }

    // while loop
    int j, m;
    printf("\n Enter a number: ");
    scanf("%d", &m);
    j = 1;
    while (j <= m)
    {
        printf("%d", j);
        j++;
    }
    j = m - 1;
    while (j >= 1)
    {
        printf("%d", j);
        j--;
    }
}