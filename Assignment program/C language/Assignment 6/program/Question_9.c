/*Write a program to calculate LCM of two numbers*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, i = 2, sum = 1, flag = 0;

    printf("Enter two numbers = ");
    scanf("%d %d", &a, &b);

    while ((a != 1) || (b != 1))
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
            sum = sum * i;

        if ((a % i != 0) && (b % i != 0))
        {
            i++;
            flag = 0;
        }
    }

    printf("%d", sum);

    return 0;
}