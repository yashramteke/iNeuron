/*Write a program to calculate sum of cubes of first N natural numbers*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, tmp, sum;

    printf("Enter number = ");
    scanf("%d", &num);

    do
    {
        sum += (num * num * num);
        num--;
    } while (num);

    printf("Sum of cubes of first %d natural numbers = %d", tmp, sum);

    return 0;
}