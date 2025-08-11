//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <stdio.h>

int main(int argc, char *argv[])
{
    int x = 64;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 1; j <= (5 + i); j++)
            if ((j >= 5 - i) && (j <= 5 + i))
            {
                if (j <= 5)
                {
                    x = x + 1;
                    printf("%c", x);
                }
                else
                {
                    x = x - 1;
                    printf("%c", x);
                }
            }
            else
                printf(" ");
        printf("\n");
        x = 64;
    }
    return 0;
}