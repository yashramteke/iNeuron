/*Write a program to check whether a given number is an Armstrong number or not*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, rem, cube = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    int temp = num;

    while (num)
    {
        rem = num % 10;
        cube = cube + (rem * rem * rem);
        num = num / 10;
    }

    if ((temp == cube) && (temp != 000))
        printf("Number is armstrong");
    else
        printf("Number is not armstrong");

    return 0;
}