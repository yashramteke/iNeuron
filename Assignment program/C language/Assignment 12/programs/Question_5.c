// Write a recursive function to print first N even natural numbers

#include <stdio.h>

void rec(int, int);

int main(int argc, char *argv[])
{
    rec(15, 2);

    return 0;
}

void rec(int num, int even)
{
    if (num == 0)
        return;

    printf("%d ", even);
    rec(num - 1, even + 2);
}