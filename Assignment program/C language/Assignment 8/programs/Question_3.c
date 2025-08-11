//* * * * * 
//* * * *
//* * *
//* *
//*

#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}