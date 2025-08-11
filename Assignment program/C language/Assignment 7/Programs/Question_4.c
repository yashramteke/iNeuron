/*Write a program to calculate HCF of two numbers*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c, flag = 0,i;

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
        printf("HCF = %d", a);
        flag = 1;
    }
    else
        for (i = a / 2; !((a % i==0) && (b % i==0)); i--);

    if (flag == 0)
        printf("HCF = %d", i);

    return 0;
}