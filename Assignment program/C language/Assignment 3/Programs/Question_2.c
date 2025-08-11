/*Write a program to check whether a given number is divisible by 5 or not*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    if (num % 5 == 0)
        printf("\nNumber is divisible by 5");
    else
        printf("\nNumber is not divisible by 5");

    return 0;
}