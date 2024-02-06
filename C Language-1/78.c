#include <stdio.h>
int main()
{
    int s;
    int sum();
    printf("Sum of  Number:");
    s = sum();
    printf("%d", s);
}
int sum()
{
    int i, s = 0;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
            s = s + i;
    }
    return (s);
}