#include <stdio.h>
int main()
{
    int i, j, k, m;
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (m = i - 1; m >= 1; m--)
        {
            printf("%d", m);
        }
        printf("\n");
    }

    return 0;
}