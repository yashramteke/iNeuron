/*Write a program to print a given number without its last digit.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    printf("%d", num / 10);

    return 0;
}