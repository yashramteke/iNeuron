// Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>

int fun(int, int);
int fact(int);

int main(int argc, char *argv[])
{
    int n, r;

    printf("Enter n = ");
    scanf("%d", &n);

    printf("Enter r = ");
    scanf("%d", &r);

    printf("Total arrangements = %d", fun(n, r));
    return 0;
}

int fun(int n, int r)
{
    return (fact(n) / fact(n - r));
}

int fact(int num)
{
    int x = 1;

    for (int i = 2; i <= num; i++)
    {
        x = x * i;
    }
    return x;
}