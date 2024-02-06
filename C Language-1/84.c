#include <stdio.h>
int main()
{
    int n;
    int series(int);
    printf("Enter a Number:");
    scanf("%d", &n);
    series(n);
}
int series(int n)
{
    int i;
    for (i = 1; i <= n; i++)
        printf("\n %d", i);
}