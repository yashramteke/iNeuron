// Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>

int prime(int);

int main(int argc, char *argv[])
{
    int a;

    printf("Enter number = ");
    scanf("%d", &a);

    printf("\nNext prime number = %d", prime(a));

    return 0;
}

int prime(int a)
{
    int i = 2;

    a = a + 1;

    while (a / 2 >= i)
    {
        if (a % i == 0)
            a = a + 1;
        else
            i = i + 1;
    }
    return a;
}
