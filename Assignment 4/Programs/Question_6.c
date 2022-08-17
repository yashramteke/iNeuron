/*Write a program to print the first 10 even natural numbers*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 1; i <= 10 * 2; i++)
        if (i % 2 == 0)
            printf("%d ", i);

    return 0;
}