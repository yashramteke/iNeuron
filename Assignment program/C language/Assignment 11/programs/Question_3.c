// Write a function to check whether a given number is Prime or not. (TSRS)

#include <stdio.h>

int prime(int);

int main(int argc, char *argv[])
{
    int a;

    printf("Enter number = ");
    scanf("%d", &a);

    if (prime(a))
        printf("Number is prime");
    else
        printf("Number is not prime");

    return 0;
}

int prime(int a)
{
    int i = 2;

    while (a / 2 >= i)
    {
        if (a % i == 0)
            return 0;
        else
            i = i + 1;
    }
    return 1;
}
