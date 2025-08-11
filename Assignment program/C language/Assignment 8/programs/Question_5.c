//    *
//   ***
//  *****
// *******
//*********

#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 1; j <= 9; j++)

            if (j > i && j < 10 - i)
                printf("*");
            else
                printf(" ");

        printf("\n");
    }

    return 0;
}