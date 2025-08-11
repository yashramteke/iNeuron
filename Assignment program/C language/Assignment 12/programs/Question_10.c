// Write a recursive function to print reverse of a given number

#include <stdio.h>

void rec(int num);

int main(int argc, char *argv[])
{
    rec(12045);

    return 0;
}

void rec(int num)
{
    if (num==0)
    {
        return;
    }
    printf("%d",num%10);
    rec(num/10);
    return;
}