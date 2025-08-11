// ABCDCBA
//  ABCBA
//   ABA
//    A

#include <stdio.h>

int main(int argc, char *argv[])
{
    int x = 64;

    for (int i = 3; i >= 0; i--)
    {
        for (int j = 1; j <= 4 + i; j++)
            if (j >= 4 - i && j <= 4 + i)
                if (j <= 4)
                {
                    x = x + 1;
                    printf("%c", x);
                }
                else
                {
                    x = x - 1;
                    printf("%c", x);
                }
            else
                printf(" ");
        x = 64;
        printf("\n");
    }
    return 0;
}