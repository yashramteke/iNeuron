/*Write a program to print a table of 5.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", 5, i,(5 * i));

    return 0;
}