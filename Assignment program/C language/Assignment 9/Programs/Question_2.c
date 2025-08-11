// Write a menu driven program with the following options: a.Addition b.Subtraction c.Multiplication d.Division e.Exit

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    float a, b;
    char choice;

    while (1)
    {
        printf("a. Addition\n");
        printf("b. Subtraction\n");
        printf("c. Multiplication\n");
        printf("d. Division\n");
        printf("e. Exit\n\n");

        fflush(stdin);

        printf("Enter Choice = ");
        scanf("%c", &choice);

        if ((choice == 'a') || (choice == 'b') || (choice == 'c') || (choice == 'd'))
        {
            printf("Enter two values for operation = ");
            scanf("%f %f", &a, &b);
        }

        switch (choice)
        {
        case 'a':
        {
            printf("Addition = %.2f\n\n", a + b);
        }
        break;

        case 'b':
        {
            printf("Subtraction = %.2f\n\n", a - b);
        }
        break;

        case 'c':
        {
            printf("Multiplication = %.2f\n\n", a * b);
        }
        break;

        case 'd':
        {
            printf("Division = %.2f\n\n", a / b);
        }
        break;

        case 'e':
        {
            exit(1);
        }
        break;

        default:
        {
            printf("Wrong input\n\n");
        }
        break;
        }
    }

    return 0;
}