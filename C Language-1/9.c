#include <stdio.h>
int main()
{
    float ps, ns, dis, pa;
    printf("Enter price of shirt, number of shirt, discount= ");
    scanf("%f%f%f", &ps, &ns, &dis);
    pa = ps * ns - (ps * ns * dis) / 100;
    printf("payabule amount= %f", pa);
    return 0;
}