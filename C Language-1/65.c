#include <stdio.h>
int main()
{
    int n, i, s = 0, ch;
    printf("Enter a numbers: ");
    scanf("%d", &n);
    printf("\n1:Even number");
    printf("\n:Odd Number");
    printf("\n Enter choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        for (i = 2; i <= n; i = i + 2)
            s = s + i;
        printf("%d", s);
        break;
    case 2:
        for (i = 1; i <= n; i = i + 2)
            s = s + i;
        printf("%d", s);
        break;
    default:
        printf("\n Wrong choice: ");
        break;
    }
}