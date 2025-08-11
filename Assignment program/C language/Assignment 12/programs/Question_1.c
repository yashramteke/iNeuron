// Write a recursive function to print first N natural numbers

#include <stdio.h>

int rec(int);

int main(int argc, char *argv[])
{
    printf("%d ",rec(10));
    return 0;
}

int rec(int num)
{
    if (num == 1)
        return num;
    else
    {
        printf("%d ",rec(num-1));
        return num;
    }
}