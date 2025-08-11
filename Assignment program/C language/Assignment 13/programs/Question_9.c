// Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>

void rec(int, int);

int main(int argc, char *argv[])
{
    rec(12345,0);

    return 0;
}

void rec(int num, int count)
{
    if (num == 0)
    {
        printf("total number = %d", count);
    }
    else
    {
        count = count + 1;
        rec(num/10, count);
    }
}