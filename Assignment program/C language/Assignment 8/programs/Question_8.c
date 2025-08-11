//   1
//  121
// 12321
//1234321


#include <stdio.h>

int main(int argc, char *argv[])
{
    int x = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 4 + i; j++)
        {
            if ((j >= 4 - i) && (j <= 4 + i))
                if (j <= 4)
                    printf("%d", x = x + 1);
                else
                    printf("%d", x = x - 1);
            else
                printf(" ");
        }
        printf("\n");
        x = 0;
    }

    return 0;
}