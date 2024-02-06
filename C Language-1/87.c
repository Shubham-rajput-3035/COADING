#include <stdio.h>
int main()
{
    int n, s;
    int sum(int);
    printf("Enter a Number:");
    scanf("%d", &n);
    s = sum(n);
    printf("%d", s);
}
int sum(int n)
{
    int m, s = 0;
    while (n > 0)
    {
        m = n % 10;
        s = s + m;
        n = n / 10;
    }

    return (s);
}