#include <stdio.h>
int main()
{
    int b;
    printf("\n Enter a number: ");
    scanf("%d", &b);
    if (b < 0)
    {
        printf("\n Negetive Number ");
    }
    if (b > 0)
    {
        printf("\n Positive number: ");
    }
    if (b == 0)
    {
        printf("Zero");
    }
    return 0;
}