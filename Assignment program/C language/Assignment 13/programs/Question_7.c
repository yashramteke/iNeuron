// Write a recursive function to calculate HCF of two numbers

#include <stdio.h>

void rec(int a, int b, int div, int ans);

int main(int argc, char *argv[])
{
    int a, b;

    printf("Enter to number = ");
    scanf("%d %d", &a, &b);

    rec(a, b, 2, 1);
    
    return 0;
}

void rec(int a, int b, int div, int ans)
{
    if (div > a)
    {
        printf("HCF = %d", ans);
    }
    else
    {
        if ((a % div == 0) && (b % div == 0))
        {
            ans = ans * div;
            rec(a / div, b / div, div, ans);
        }
        else
        {
            div = div + 1;
            rec(a, b, div, ans);
        }
    }
}