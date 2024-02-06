#include <stdio.h>
int main()
{
    float r, a;
    float area(float);
    printf("Enter a Number:");
    scanf("%f", &r);
    a = area(r);
    printf("%f", a);
}
float area(float r)
{
    float a;
    a = 3.14 * r * r;
    return (a);
}