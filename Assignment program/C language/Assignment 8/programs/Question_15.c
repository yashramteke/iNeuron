//     *
//    **
//   * *
//  *  *
// *****

#include <stdio.h>

int main(int argc, char *argv[])
{
    int flag = 5, space = 0, x = -1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= 1; j--)
            if (i < 3)
                if (6 - j >= flag)
                    printf("*");
                else
                    printf(" ");
            else if (i == 5)
                printf("*");
            else if ((6 - j >= flag) && space == 0)
            {
                printf("*");
                space = x;
            }
            else if (space != 0)
            {
                printf(" ");
                space = space - 1;
            }
            else
                printf(" ");

        printf("\n");
        space = 0;
        x = x + 1;
        flag = flag - 1;
    }

    return 0;
}