/*Assume price of 1 USD is INR 76.23.
Write a program to take the amount in INR and convert it into USD.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    float inr;

    printf("Enter INR = ");
    scanf("%f", &inr);

    printf("\nAmount in USD = %.2f", inr/76.23);

    return 0;
}