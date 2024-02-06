#include <stdio.h>
int main()
{
    int a, b, c, ch;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\n1:Add");
    printf("\n2:Sub");
    printf("\n3:Multi");
    printf("\n Enter choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        c = a + b;
        printf("%d", c);
        break;
    case 2:
        c = a - b;
        printf("%d", c);
        break;
    case 3:
        c = a * b;
        printf("%d", c);
        break;

    default:
        printf("\n Wrong choice: ");
        break;
    }
}