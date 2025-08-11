// Write a function to calculate simple interest. (TSRS)

#include <stdio.h>

float simpleInterest(float, float, float);

int main(int argc, char *argv[])
{

    float principal, rateofinterest, timeperoid;

    printf("Enter principal = ");
    scanf("%f", &principal);

    printf("Enter rate of interest = ");
    scanf("%f", &rateofinterest);

    printf("Enter time period in months = ");
    scanf("%f", &timeperoid);

    printf("\nSimple Interest = %.2f", simpleInterest(principal, rateofinterest, timeperoid));
    return 0;
}

float simpleInterest(float principal, float rateofinterest, float timeperiod)
{
    return (principal * (rateofinterest / 100) * (timeperiod / 12));
}