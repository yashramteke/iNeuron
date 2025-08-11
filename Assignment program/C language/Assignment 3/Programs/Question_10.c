/*Write a program which takes the cost price and selling price of a product from the user.
Now calculate and print profit or loss percentage.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    float cp, sp, profit, loss;

    printf("Enter cost price = ");
    scanf("%f", &cp);

    printf("Enter selling price = ");
    scanf("%f", &sp);

    if (cp > sp)
        printf("Loss percentage = %.2f%%", ((cp - sp) / cp) * 100);
    else
        printf("Profit percentage = %.2f%%", ((sp - cp) / cp) * 100);

    return 0;
}