/*Write a program to check whether two given numbers are co-prime numbers or not*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c, flag = 0, i;

    printf("Enter two number = ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (b % a == 0)
    {
        printf("number is not co-prime");
        flag = 1;
    }
    else
        for (i = a / 2; !((a % i == 0) && (b % i == 0)); i--)
            ;

    if (i == 1)
        printf("number is co-prime");
    else if (i > 1)
        printf("number is not co-prime");

    return 0;
}