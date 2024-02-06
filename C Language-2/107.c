#include <stdio.h>
// #include <conio.h>

int main()
{
    int a[10], i, c = 0;

    printf("Enter 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }  

    printf("\nCount Negetive Numbers\n");

    if (a[i] < 0)
    {
        c++;
    }

    printf("%d", c);

    return 0;
}