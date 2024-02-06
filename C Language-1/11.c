#include <stdio.h>
int main()
{
    int n, s;
    printf("Enter a number: ");
    scanf("%d", &n);
    s = n / 2 * (1 + n);
    printf("sum of serirs: %d", s);
    return 0;
}