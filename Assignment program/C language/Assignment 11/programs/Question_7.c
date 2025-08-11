// Write a function to print first N terms of Fibonacci series (TSRN)

#include <stdio.h>

void fib(int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    fib(num);

    return 0;
}

void fib(int num)
{
    int a = 0, b = 1, ans;

    printf("%d %d ",0,1);

    for (int i = 1; i <= (num-2); i++)
    {
        ans = a + b;
        printf("%d ", ans);

        a = b;
        b = ans;
    }
}