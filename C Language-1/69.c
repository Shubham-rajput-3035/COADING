#include <stdio.h>
int main()
{
    int i = 1;
start:
    printf("\n %d", i);
    if (i < 100)
    {
        i++;
        goto start;
    }
    return 0;
}