#include <stdio.h>
int main()
{
    float pa, dis;
    printf("Enter Purchase amount: ");
    scanf("%f", &pa);
    dis = pa - 20 / 100;
    printf("discount= %f", dis);
    return 0;
}