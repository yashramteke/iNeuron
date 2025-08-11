/*Write a program to count digits in a given number*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, rem, count = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    while (num)
    {
        rem = num % 10;
        num = num / 10;
        count++;
    }

    printf("Digit in given number = %d", count);

    return 0;
}