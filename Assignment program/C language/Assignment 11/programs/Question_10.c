// Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.

#include <stdio.h>
int fact(int);
int series(int);

int main(int argc, char *argv[])
{
    printf("sum is = %d",series(5));

    return 0;
}

int fact(int num)
{
    int ans = 1;

    for (int i = 2; i <= num; i++)
        ans *= i;
    
    return ans;
}

int series(int i)
{
    int sum = 0;

    while (i)
    {
        sum = sum + (fact(i)/i);
        i=i-1;    
    }
    return sum;
}