/*Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, rem, temp, i;

    printf("Enter three digit number = ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        temp = temp / 10;
    }

    num = num - (rem * 100);
    num = num * 10 + rem;

    printf("\nDigit rotate towards right  = %d", num);
    return 0;
}