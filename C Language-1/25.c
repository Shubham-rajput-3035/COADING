#include <stdio.h>
int main()
{
    int year;
    printf("Enter name of year: ");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)

            printf("Leap Year");
        else
            printf("Not Leap Year");
    }
    else
    {
        if (year % 4 == 0)

            printf("Leap Year");

        else

            printf("Not Leap Year");
    }

    return 0;
}