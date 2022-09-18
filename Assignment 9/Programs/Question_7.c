/*Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    float unit, charges;
    int i;

    printf("Enter unit = ");
    scanf("%f", &unit);

    if ((unit >= 0) && (unit <= 50))
        i = 0;
    else if ((unit > 50) && (unit <= 100))
        i = 1;
    else if ((unit > 100) && (unit <= 150))
        i = 2;
    else if ((unit > 150) && (unit <= 250))
        i = 3;
    else
        i = 4;

    switch (i)
    {
    case 0:
        printf("total charges for %.2f unit = RS. %.2f", unit, unit * 0.50);
        break;

    case 1:
        printf("total charges for %.2f unit = RS. %.2f", unit, unit * 0.75);
        break;

    case 2:
        printf("total charges for %.2f unit = RS. %.2f", unit, unit * 1.20);
        break;

    case 3:
        printf("total charges for %.2f unit = RS. %.2f", unit, unit * 1.50);
        break;

    case 4:
        printf("charges for %.2f unit (+20%c surcharges) = RS. %.2f  ", unit,37, ((20 * (unit * 1.50)) / 100) + (unit * 1.50));
        break;

    default:
        printf("invalid input");
        break;
    }
    return 0;
}