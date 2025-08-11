// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A

#include <stdio.h>

int main(int argc, char *argv[])
{
    int x = 64;
    for (int i = -1; i <= 5; i++)
    {
        for (int j = 1; j <= 13; j++)
            if (i == -1)
                if (j <= 7)
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
                if (j <= (6 - i))
                {
                    x = x + 1;
                    printf("%c", x);
                }
                else if (j >= (8 + i))
                {
                    printf("%c", x);
                    x = x - 1;
                }
                else
                    printf(" ");
        x = 64;
        printf("\n");
    }

    return 0;
}