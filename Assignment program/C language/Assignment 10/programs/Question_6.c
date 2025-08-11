// Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>

void fact(int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    fact(num);

    return 0;
}

void fact(int num)
{
    for (int i = (num - 1); i > 1; i--)
        num = num * i;

    printf("%d", num);
}