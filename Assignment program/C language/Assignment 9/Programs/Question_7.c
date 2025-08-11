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
    float unit, charges = 0;
    int i;

    printf("Enter unit = ");
    scanf("%f", &unit);

    switch (unit <= 50)
    {
    case 1:
    {
        charges = unit * 0.50;
    }
    break;

    case 0:
    {
        switch (unit <= 150)
        {
        case 1:
        {
            charges = 25 + ((unit - 50) * 0.75);
        }
        break;

        case 0:
        {
            switch (unit <= 250)
            {
            case 1:
            {
                charges = 100 + ((unit - 150) * 1.20);
            }
            break;

            case 0:
            {
                charges = 220 + ((unit - 250) * 1.50);
            }
            break;
            }
        }
        break;
        }
    }
    break;
    }
    printf("Total charges = %.2f", ((20 * charges) / 100) + charges);
    return 0;
}