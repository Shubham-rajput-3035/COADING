#include <stdio.h>
int main()
{
    int n, a;
    int sum(int);
    printf("Enter a number: ");
    scanf("%d", &n);
    a = sum(n);
    printf("%d", a);
}
int sum(int n)
{
    int m, a = 0;
    while (n > 0)
    {
        m = n % 10;
        a = a + m;
        n = n / 10;
    }

    return (a);
}