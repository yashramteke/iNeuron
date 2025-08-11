/*Write a program to reverse a given number*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, rem, rev = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    while (num)
    {
        rev = (10 * rev + num % 10);
        num /= 10;
    }

    printf("%d", rev);

    return 0;
}