/*Write a program to swap values of two int variables*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, temp;

    printf("Enter first number = ");
    scanf("%d", &a);

    printf("Enter second number = ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nFirst number = %d\n", a);
    printf("Second number = %d", b);

    return 0;
}