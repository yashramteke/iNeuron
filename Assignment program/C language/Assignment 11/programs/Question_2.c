// Write a function to calculate HCF of two numbers. (TSRS)

#include <stdio.h>

int hcf(int, int);

int main(int argc, char *argv[])
{
    int a, b;

    printf("Enter two number = ");
    scanf("%d %d", &a, &b);

    printf("HCF = %d", hcf(a, b));

    return 0;
}

int hcf(int a, int b)
{
    int i = 2, ans = 1, flag = 0;

    while (i <= a && i <= b)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            a = a / i;
            b = b / i;
            flag = 1;
        }

        if (flag == 1)
        {
            ans = ans * i;
            flag = 0;
        }

        if ((a % i != 0) || (b % i != 0))
            i = i + 1;
    }
    return ans;
}
