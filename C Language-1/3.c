#include <stdio.h>
int main()
{
    int a, b, n;
    printf("Enter a number= ");
    scanf("%d", &n);
    a = n * n;
    printf("\n Square of a number =%d", a);
    b = n * n * n;
    printf("\n cube of a number= %d", b);
    return 0;
}