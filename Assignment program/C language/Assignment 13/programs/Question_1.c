// Write a recursive function to calculate sum of first N natural numbers

#include <stdio.h>

int rec(int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    printf("sum is = %d",rec(num));

    return 0;
}

int rec(int num)
{
    if (num == 1)
        return num;
    else
        return (num + rec(num - 1));
}