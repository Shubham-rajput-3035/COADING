#include <stdio.h>
int main()
{
    int num, sq, cube;
    printf("\n Enter a number: ");
    scanf("%d", &num);
    sq = num * num;
    printf("\n %d", sq);
    cube = num * num * num;
    printf("\n %d", cube);
    return 0;
}