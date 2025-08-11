// Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include <stdio.h>

int EvenOdd(int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    printf("%d", EvenOdd(num));
    return 0;
}

int EvenOdd(int num)
{
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}
