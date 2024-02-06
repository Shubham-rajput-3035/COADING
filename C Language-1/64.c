#include <stdio.h>
int main()
{
    float r, c;
    int ch;
    printf("Enter radious: ");
    scanf("%f", &r);
    printf("\n1:Area of a circle");
    printf("\n2:Circumfrance of a circle");
    printf("\n Enter choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        c = 3.14 * r * r;
        printf("%f", c);
        break;
    case 2:
        c = 2 * 3.14 * r;
        printf("%f", c);
        break;
    default:
        printf("\n Wrong choice: ");
        break;
    }
}
