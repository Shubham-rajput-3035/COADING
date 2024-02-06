#include <stdio.h>
int main()
{
    int s;
    int sum();
    printf("Sum of all Numbers:");
    s = sum();
    printf("%d", s);
}
int sum()
{
    int i, s = 0;
    for (i = 1; i <= 100; i++)
        s = s + i;
    return (s);
}