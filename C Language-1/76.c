#include <stdio.h>
int main()
{
    int n, s;
    int factoriyal(int);
    printf("Enter a Number:");
    scanf("%d", &n);
    s = factoriyal(n);
    printf("%d", s);
}
int factoriyal(int n)
{
    int i, s = 1;
    for (i = 1; i <= n; i++)
        s = s * i;
    return (s);
}