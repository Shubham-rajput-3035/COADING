#include <stdio.h>
int main()
{
    int n;
    void prime(int);
    printf("Enter a Number:");
    scanf("%d", &n);
    prime(n);
}
void prime(int n)
{
    int i, c = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c == 2)
        printf("prime Number");
    else
        printf("Not prime Number");
}
