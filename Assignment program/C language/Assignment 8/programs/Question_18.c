//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4 + i; j++)
            if ((j >= 4 - i) && (j <= 4 + i))
                printf("*");
            else
                printf(" ");
        printf("\n");
    }

    for (int i = 3; i >= 0; i--)
    {
        for (int j = 0; j <= 4 + i; j++)
            if ((j >= 4 - i) && (j <= 4 + i))
                printf("*");
            else
                printf(" ");
        printf("\n");
    }

    return 0;
}