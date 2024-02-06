#include <stdio.h>
int main()
{
    int n, a, s = 0, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    a = n;
    while (n > 0)
    {
        m = n % 10;
        s = s + m * m * m;

        n = n / 10;
    }
    if (a == s)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}