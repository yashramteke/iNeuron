//     *
//    * *
//   *   *
//  *     *
// *********

#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4 + i; j++)
            if ((4 - i == j) || (4 + i == j))
                printf("*");
            else
                if (i == 4)
                    printf("*");
                else
                    printf(" ");
        printf("\n");
    }
    return 0;
}