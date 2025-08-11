/*Write a program to check whether the given number is even or odd using a bitwise operator.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num1;

    printf("Enter number = ");
    scanf("%d", &num1);

    (num1 & 1) ? printf("Odd number") : printf("Even number");

    return 0;
}