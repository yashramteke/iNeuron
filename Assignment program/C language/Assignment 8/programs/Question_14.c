// *
// **
// * *
// *  *
// *****

#include <stdio.h>

int main(int argc, char *argv[])
{
    int space = 0, x = 1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i < 3 || i == 5)
            {
                printf("*");
            }
            else if (space == 0)
            {
                printf("*");
                space = x;
            }
            else if (space != 0)
            {
                printf(" ");
                space = space - 1;
            }
        }
        printf("\n");
        if (i > 2)
        {
            x = x + 1;
            space = 0;
        }
    }
}