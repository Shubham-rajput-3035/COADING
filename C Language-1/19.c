#include <stdio.h>
int main()
{
    int a, b, c, avg;
    printf("\n Enter marks of three subjects: ");
    scanf("%d%d%d", &a, &b, &c);
    avg = (a + b + c) / 3;
    if (avg > 75)
    {
        printf("\n Destination");
    }
    else if (avg >= 50 && avg < 75)
    {
        printf("\n Good");
    }
    else
    {
        printf("\n Fail");
    }
    return 0;
}