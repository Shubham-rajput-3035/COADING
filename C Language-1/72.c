#include <stdio.h>
int main()
{
    int i = 1, s = 0, n;
    printf("Enter a Number: ");
    scanf("%d", &n);
start:
    while (i < n)
    {
        if (n % i == 0)
        {
            s++;
            i++;
            goto start;
        }
    }
    if (s == 2)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}