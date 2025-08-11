// Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>

int rec(int, int);

int main(int argc, char *argv[])
{
    int num, pow;

    printf("Enter number = ");
    scanf("%d", &num);

    printf("Enter power = ");
    scanf("%d", &pow);

    printf("Answer = %d",rec(num, pow));

    return 0;
}

int rec(int num, int pow)
{
    if (pow == 1)
        return num;
    else
        return (num * rec(num, pow-1));
}