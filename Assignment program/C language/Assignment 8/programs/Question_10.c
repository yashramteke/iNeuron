//1234321
//123 321
//12   21
//1     1

#include <stdio.h>

int main(int argc, char *argv[])
{
    int x = 0, y = 0;
    for (int i = 4; i >= 1; i--)
    {
        if (i >= 3)
            y = 0;
        else
            y = y + 1;

        for (int j = 1; j <= 7; j++)
        {
            if (j <= i)
            {
                x = x + 1;
                printf("%d", x);
            }
            else if (j >= 5 + y)
            {
                if (i == 4)
                {
                    x = x - 1;
                    printf("%d", x);
                }
                else
                {
                    printf("%d",x);
                    x=x-1;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        x = 0;
    }

    return 0;
}