#include <stdio.h>
int main()
{
    int m;
    int convert(int);
    printf("Enter a Number:");
    scanf("%d", &m);
    convert(m);
}
int convert(int m)
{
    int cm, km;
    cm = m * 100;
    printf("\n%d", cm);
    km = m / 1000;
    printf("\n %d", km);
}