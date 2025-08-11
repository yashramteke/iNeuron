/*Write a program to make the last digit of a number stored in a variable as zero.
(Example -if x=2345 then make it x=2340)*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    num /= 10;
    num *= 10;

    printf("\nResult = %d", num);

    return 0;
}