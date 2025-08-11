// Write a recursive function to calculate sum of squares of first n natural numbers

#include <stdio.h>

int rec(int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    printf("Sum  is = %d", rec(num));

    return 0;
}

int rec(int num)
{
    if (num == 1)
        return 1;
    else
        return ((num * num) + rec(num - 1));
}