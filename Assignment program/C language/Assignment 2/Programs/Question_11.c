/*Write a program to input a number from the user and also input a digit.
Append a digit in the number and print the resulting number.
(Example -number=234 and digit=9 then the resulting number is 2349)*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, dig;

    printf("Enter number = ");
    scanf("%d", &num);

    printf("Enter digit = ");
    scanf("%d",&dig);

    printf("\nResult = %d",(num*10)+dig);

    return 0;
}