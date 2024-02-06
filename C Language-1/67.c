#include <stdio.h>
int main()
{
    float r, c;
    int ch;
    printf("Enter a numbers: ");
    scanf("%f", &r);
    printf("\n1:Dollar");
    printf("\n2:France");
    printf("\n3:Yen");
    printf("\n Enter choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        c = r / 78;
        printf("%f", c);
        break;
    case 2:
        c = r / 82;
        printf("%f", c);
        break;
    case 3:
        c = r / 84;
        printf("%f", c);
        break;

    default:
        printf("\n Wrong choice: ");
        break;
    }
    return 0;
}