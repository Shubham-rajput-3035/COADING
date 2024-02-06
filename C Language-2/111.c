#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], i, j, c = 0;

    printf("Enter 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nPrime Numbers\n");
    for (i = 0; i < 10; i++)
    {
        c = 0;
        for (j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                c++;
            }
        }

        if (c == 2)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}