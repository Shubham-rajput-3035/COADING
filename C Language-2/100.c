#include <stdio.h>
int main()
{
    int a, b, c, avg;
    int avarage(int, int, int);
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    avg = avarage(a, b, c);
    printf("%d", a);
}
int avarage(int a, int b, int c)
{
    int s = 0, avg;
    s = a + b + c;
    avg = s / 3;
    return (avg);
}