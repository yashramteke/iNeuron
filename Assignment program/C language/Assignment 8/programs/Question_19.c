//   *****     *****
//  *******   *******
// ********* *********
// ******MySirG*******
//  *****************
//   ***************
//    *************
//     ***********
//      *********
//       *******
//        *****
//         ***
//          *

#include <stdio.h>

int main(int argc, char *argv[])
{
    int heart_size = 24, col = (heart_size - 3) * 2, x = 0, size = 0, center, line = 2;
    char name[] = "MySirG";

    // counting starting lines for perfect shape -> start
    for (int i = 4; heart_size >= (12 + i); i = i + 4)
    {
        line = line + 1;
    }
    // counting starting lines for perfect shape -> end

    // first 3 rows -> start
    for (int i = 0; i <= line; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            if (((j >= (line - i)) && (j < (col / 2) - (line - i))) || ((j > (col / 2) + (line - i)) && (j <= col - (line - i))))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    // first 3 rows -> end

    // string size count -> start
    while (name[x] != '\0')
    {
        size = size + 1;
        x = x + 1;
    }
    // string size count -> end

    center = (col + 1) - size; // finding center for name

    x = 0;
    for (int i = 0; i <= (heart_size - 3); i++)
    {
        if (i == 0)
        {
            // printing name -> start
            for (int j = 0; j <= col; j++)
            {
                if ((j < (center / 2)) || (j >= (center / 2) + size))
                {
                    printf("*");
                }
                else
                {
                    printf("%c", name[x]);
                    x = x + 1;
                }
            }
            // printing name -> end
        }
        else
        {
            // printing second triangle -> start
            for (int j = 0; j <= (col - i); j++)
            {
                if (j >= i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            // printing second triangle -> end
        }
        printf("\n");
    }
    return 0;
}