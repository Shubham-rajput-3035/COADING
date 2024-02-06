#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > 50)
        if (b > 50)
            if (c > 50)
                printf("Pass");
            else
                printf("Fail");
        else
            printf("Fail");
    else
        printf("Fail");
    return 0;
}