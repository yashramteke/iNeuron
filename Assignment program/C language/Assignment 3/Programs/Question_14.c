/*Write a program to check whether a given number is divisible by 7 or divisible by 3.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    if (num % 7 == 0 || num % 3 == 0)
        printf("Number is divisible by 7 OR divisible by 3");
    else
        printf("number is not divisible");

    return 0;
}