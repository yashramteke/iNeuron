/*Write a program to check whether a given number is positive, negative or zero.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    if (num < 0)
        printf("Number is negative");
    else if (num > 0)
        printf("Number is positive");
    else
        printf("Number is zero");

    return 0;
}