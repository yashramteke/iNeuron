// Write a recursive function to calculate factorial of a given number

#include <stdio.h>

int rec(int);

int main(int argc, char *argv[])
{
    printf("factorial = %d",rec(5));

    return 0;
}

int rec(int num)
{
    if (num == 2)
        return 2;
    else
        return (num * rec(num - 1));
}