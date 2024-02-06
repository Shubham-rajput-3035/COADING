#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (i = 2; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    char a, b, c;
    for (a = 'E'; a >= 'A'; a--)
    {
        for (c = 'E'; c >= a; c--)
        {
            printf(" ");
        }

        for (b = 'A'; b <= a; b++)
        {
            printf("%c", b);
        }
        printf("\n");
    }
    for (a = 'B'; a <= 'E'; a++)
    {
        for (c = 'E'; c >= a; c--)
        {
            printf(" ");
        }

        for (b = 'A'; b <= a; b++)
        {
            printf("%c", b);
        }
        printf("\n");
    }
    return 0;
}