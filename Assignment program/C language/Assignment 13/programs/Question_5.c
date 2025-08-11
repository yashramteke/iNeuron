// Write a recursive function to calculate sum of digits of a given number

#include <stdio.h>

int rec(int);

int main(int argc, char *argv[])
{
    printf("sum is = %d",rec(5));

    return 0;
}

int rec(int num)
{
    if (num == 1)
        return 1;
    else
        return (num + rec(num - 1));
}