#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    m = n % 10;
    while (n > 9)
    {
        n = n / 10;
    }
    printf("%d", m + n);
    return 0;
}