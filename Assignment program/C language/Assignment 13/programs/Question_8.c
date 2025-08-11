// Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>

void rec(int, int, int, int);

int main(int argc, char *argv[])
{
    int num; 

    printf("Enter number = ");
    scanf("%d", &num);

    printf("1 ");
    rec(num, 0, 1, 0);

    return 0;
}

void rec(int num, int a, int b, int fact)
{
    if (num == 1)
    {
        return;
    }
    else
    {
        num = num - 1;

        fact = a + b;

        printf("%d ", fact);

        a = b;
        b = fact;

        rec(num, a, b, fact);
    }
}
