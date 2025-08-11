/*Write a program to calculate factorial of a number*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, fact = 1;

    printf("Enter number = ");
    scanf("%d", &num);

    int tmp = num;

    while (num)
    {
        fact *= num;
        num--;
    }

    printf("Factorial of %d = %d", tmp, fact);

    return 0;
}