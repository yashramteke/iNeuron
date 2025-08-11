/*Write a program to print the first 10 even natural numbers in reverse order*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 10 * 2; i >= 1; i-=2)
        if (i % 2 == 0)
            printf("%d ", i);

    return 0;
}