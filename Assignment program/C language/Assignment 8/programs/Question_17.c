// *********
//  *     *
//   *   *
//    * *
//     *

#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 8; j >= 4 - i; j--)
            if (i == 4)
                printf("*");
            else if ((4 - i == j) || (4 + i == j))
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}