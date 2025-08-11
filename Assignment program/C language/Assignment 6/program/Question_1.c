/*Write a program to calculate sum of first N natural numbers*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, tmp, sum = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    tmp = num;

    do
    {
        sum += num;
        num--;
    } while (num);

    printf("Sum of first %d natural number = %d", tmp, sum);

    return 0;
}