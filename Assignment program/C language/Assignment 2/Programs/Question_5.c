/*Write a program to input a three-digit number and display the sum of the digits.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, sum = 0, rem;

    printf("Enter three number = ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("\nSum of the digit = %d", sum);
    return 0;
}