/*Write a program to print squares of the first 10 natural numbers*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 1; i <= 10; i++)
        printf("Square of %d = %d\n", i, (i * i));

    return 0;
}