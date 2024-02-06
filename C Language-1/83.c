#include <stdio.h>
int main()
{
    void prime();
    prime();
    return 0;
}
// void prime()
// {
//     int i, a = 1, c = 0;
//     for (i = 1; i <= 100; i++)
//         while (i >= a)
//         {
//             if (i % a == 0)
//             {
//                 c++;
//                 a++;
//             }
//         }
//     if (c == 2)
//         printf("\n %d", i);
// }
void prime()
{
    for (int i = 1; i <= 100; i++)
    {
        int a = 1, c = 0;
        while (i >= a)
        {
            if (i % a++ == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("\n %d", i);
        }
    }
}