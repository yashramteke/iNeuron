/*Write a program to print unit digit of a given number*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter Number = ");
    scanf("%d", &num);

    printf("Unit of given number = %d", num % 10);

    return 0;
}