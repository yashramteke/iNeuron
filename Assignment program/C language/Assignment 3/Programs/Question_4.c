/*Write a program to check whether a given number is an even number or an odd number without using % operator.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    num & 1 ? printf("Odd number") : printf("Even number");

    return 0;
}