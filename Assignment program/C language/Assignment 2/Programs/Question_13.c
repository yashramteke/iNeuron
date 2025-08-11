/*Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, rem, temp, i;

    printf("Enter three digit number = ");
    scanf("%d", &num);

    printf("\nDigit rotate towards right  = %d", (num % 10) * 100 + (num / 10));

    return 0;
}
