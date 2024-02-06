#include <stdio.h>
// #include <conio.h>

int main()
{
    int a[10], i;

    printf("Enter 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nReverse Numbers\n");

    for (i = 10; i >= 1; i--)
        printf("%d", a[i]);

    return 0;
}