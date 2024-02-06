#include <stdio.h>
int main()

{
    // while loop
    int n, s = 0, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        m = n % 10;
        s = s + m;
        n = n / 10;
    }
    printf("%d", s);
    return 0;
}