/*Write a program to print the first N natural numbers.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, i = 1;

    printf("Enter number = ");

    for (scanf("%d", &num); i <= num; ++i)
        printf("%d ", i);

    return 0;
}