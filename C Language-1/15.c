#include <stdio.h>
int main()
{
    float c, d, e, avg;
    printf("\n Enter three numbers:");
    scanf("%f%f%f", &c, &d, &e);
    avg = (c + d + e) / 3;
    if (avg > 60)
    {
        printf("PASS");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}