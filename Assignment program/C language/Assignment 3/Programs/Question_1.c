/*Write a program to check whether a given number is positive or non-positive*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    if (num > 0)
        printf("\npositive");
    else
        printf("\nnon-positive");

    return 0;
}