// Write a function to calculate LCM of two numbers. (TSRS)

#include <stdio.h>

int lcm(int, int);

int main(int argc, char *argv[])
{
    int a, b;

    printf("Enter two number = ");
    scanf("%d %d", &a, &b);

    printf("LCM = %d", lcm(a, b));

    return 0;
}

int lcm(int a, int b)
{
    int i = 2, ans = 1, flag = 0;

    while (a != 1 || b != 1)
    {
        if (a % i == 0)
        {
            a = a / i;
            flag = 1;
        }

        if (b % i == 0)
        {
            b = b / i;
            flag = 1;
        }

        if (flag == 1)
        {
            ans = ans * i;
            flag = 0;
        }

        if ((a % i != 0) && (b % i != 0))
            i = i + 1;
    }
    return ans;
}