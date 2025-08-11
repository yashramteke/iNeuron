/*Write a program to print the first N odd natural numbers*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, i = 1;

    printf("Enter number = ");

    for (scanf("%d", &num); i <= num; i = i + 2)
        printf("%d ", i);

    return 0;
}