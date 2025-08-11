/*Write a program to check whether a given number is a Prime number or not*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, i = 2;

    printf("Enter number = ");
    scanf("%d", &num);

    while ((num % i != 0) && (i < num))
    {
        i++;
    }

    if (i == num)
        printf("%d number is prime", num);
    else
        printf("number is not prime");

    return 0;
}