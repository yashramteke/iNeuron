/*Write a program to print cubes of the first 10 natural numbers*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 1; i <= 10; i++)
        printf("Cube of %d = %d\n", i, (i * i * i));

    return 0;
}