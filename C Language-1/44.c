#include <stdio.h>
int main()
{
    int n, s = 0, c = 0, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        m = n % 10;
        if (m % 2 == 1)
        {
            s = s + m;
            c++;
        }
        n = n / 10;
    }
    printf("%d", s / c);
    return 0;
}