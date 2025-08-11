/*Write a program to find the position of first 1 in LSB.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, rem = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    for (int count = 1; rem != 1; count++)
    {
        rem = num % 2;
        num /= 2;
        if (rem == 1)
            printf("\nLSB found in %d position", count);
    }
    return 0;
}