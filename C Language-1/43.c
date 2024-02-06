#include <stdio.h>
int main()
{
    int n, s = 0, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        m = n % 10;
        if (m % 2 == 0)
            s = s + m;
        n = n / 10;
    }
    printf("%d", s);
    return 0;
}