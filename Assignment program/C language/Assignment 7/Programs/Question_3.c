/*Write a program to check whether a given number is there in the Fibonacciseries or not.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, a = 0, b = 1, c = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    while (c < num)
    {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == num)
    {
        printf("Number found");
    }
    else
    {
        printf("Number not found");
    }

    return 0;
}