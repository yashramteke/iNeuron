// Write a recursive function to calculate sum of first N even natural numbers

#include <stdio.h>

int rec(int, int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    printf("Sum is = %d",rec(num, 2));

    return 0;
}

int rec(int num, int even)
{
    if (num == 1)
        return even;
    else
    {
        even = even + rec(num - 1, even + 2);
        return even;
    }
}