#include <stdio.h>
int main()
{
    float u, t, a, s;
    printf("Enter inisial Valocity,accrestion and time= ");
    scanf("%f%f%f", &u, &t, &a);
    s = u * t + 0.5 * a * t * t;
    printf("\n distance= %f", s);
    return 0;
}