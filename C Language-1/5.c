#include <stdio.h>
int main()
{
    int p, t, r, si;
    printf("Enter principal amount, time and rate= ");
    scanf("%d%d%d", &p, &t, &r);
    si = (p * t * r) / 100;
    printf("\n Simple Intrest= %d", si);
    return 0;
}