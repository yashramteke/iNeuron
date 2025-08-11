/*Write a program to check whether a given number is a three-digit number or not*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, count;

    printf("Enter number = ");
    scanf("%d", &num);

    for (count = 1; num /= 10; count++);

    if (count == 3)
        printf("Number is three digit");
    else
        printf("Number is not three digit");

    return 0;
}