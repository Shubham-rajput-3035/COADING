#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], i, s = 0;

    printf("Enter 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n sum of the Numbers\n");

    for (i = 1; i <= 10; i++)
        s = s + a[i];
    printf("%d", s);

    return 0;
}