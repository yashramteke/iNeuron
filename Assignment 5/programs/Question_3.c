/*Write a program to print the first N natural numbers in reverse order*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");

    for (scanf("%d", &num); num; --num)
        printf("%d ", num);

    return 0;
}