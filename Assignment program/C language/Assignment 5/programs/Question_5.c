/*Write a program to print the first N odd natural numbers in reverse order.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");

    for (scanf("%d", &num); num; num--)
        if (num % 2 != 0)
            printf("%d ", num);

    return 0;
}