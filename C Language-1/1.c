#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("\n Addition= %d", c);
    d = a - b;
    printf("\n subtraction= %d", d);
    e = a * b;
    printf("\n multiplication= %d", e);
    f = a / b;
    printf("\n Division= %d", f);
    return 0;
}