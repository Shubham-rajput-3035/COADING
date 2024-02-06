#include <stdio.h>
int main()
{
    int m, n1, n, i, s = 0, ch;
    printf("Enter a numbers: ");
    scanf("%d", &n);
    printf("\n1:Prime number");
    printf("\n:Palindrome Number");
    printf("\n Enter choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        for (i = 2; i <= n; i = i + 2)
            if (n % i == 0)
                s++;
        if (s == 2)
            printf("Prime number");
        else
            printf("Not Prime Number");
        break;
    case 2:
        n1 = n;
        while (n > 0)
        {
            m = n % 10;
            // reverce=r*10+m
            s = s * 10 + m;
            n = n / 10;
        }
        if (n1 == s)
            printf("Palindrome Number");
        else
            printf("Not Palindrome Number");
        break;
    default:
        printf("\n Wrong choice: ");
        break;
    }
}