// Write a recursive function to calculate sum of first N odd natural numbers

#include <stdio.h>

int rec(int num, int odd);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    printf("Sum is = %d", rec(num, 1));
    return 0;
}

int rec(int num, int odd)
{
    if (num == 1)
        return odd;
    else
    {
        odd = odd + rec(num-1, odd + 2);
        return odd;
    }
}