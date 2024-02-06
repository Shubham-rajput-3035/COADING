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
    int i, s = 0;
    for (i = 1; i <= n; i = i + 2)
        s = s + i;
    return (s);
}