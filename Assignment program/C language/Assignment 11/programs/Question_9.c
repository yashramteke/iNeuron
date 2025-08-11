// Write a program in C to find the square of any number using the function.

#include <stdio.h>

float Square(float);

int main(int argc, char *argv[])
{
    float num;

    printf("Enter number = ");
    scanf("%f", &num);

    printf("\nSquare = %.2f", Square(num));

    return 0;
}

float Square(float num)
{
    return(num*num);
}