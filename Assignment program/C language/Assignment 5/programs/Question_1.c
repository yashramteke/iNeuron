/*Write a program to print MySirG N times on the screen*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");

    for (scanf("%d", &num); num; --num)
        printf("MySirG\n");

    return 0;
}