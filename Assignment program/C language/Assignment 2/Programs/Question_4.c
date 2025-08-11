/*Write a program to swap values of two int variables without using a third variable.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b;

    printf("Enter first number = ");
    scanf("%d", &a);

    printf("Enter second number = ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nFirst number = %d\n", a);
    printf("Second number = %d", b);

    return 0;
}