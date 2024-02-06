#include <stdio.h>
int main()
{
    int n, a, r = 0, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    a = n;
    while (n > 0)
    {
        m = n % 10;
        r = r * 10 + m;
        n = n / 10;
    }
    if (a == r)
        printf("Pallindrom Number");
    else
        printf("Not Pallindrom Number");
    return 0;
}