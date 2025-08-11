/*Write a program to check whether a given number is an even number or an odd number*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("\nEven number");
    else
        printf("\nOdd number");
    return 0;
}