/*Write a program to calculate sum of first N even natural numbers*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, sum = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i += 2)
        sum += i;

    printf("Sum of first %d even natural numbers = %d", num, sum);

    return 0;
}