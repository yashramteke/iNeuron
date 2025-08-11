// Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>

void rec(int);

int main(int argc, char *argv[])
{
    rec(10);
    return 0;
}

void rec(int num)
{
    if (num == 1)
        printf("%d ", num);
    else
    {
        printf("%d ", num);
        rec(num - 1);
    }
}