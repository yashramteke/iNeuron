// Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>

int fact(int);
int comb(int, int);

int main(int argc, char *argv[])
{
    int num, r;

    printf("Enter number = ");
    scanf("%d", &num);

    printf("Enter selected items at a time = ");
    scanf("%d", &r);

    printf("Number of combinations = %d", comb(num, r));

    return 0;
}

int fact(int num)
{
    for (int i = (num - 1); i > 1; i--)
        num = num * i;
    return num;
}

int comb(int num, int r)
{
    return (fact(num)/(fact(r)*fact(num-r)));
}