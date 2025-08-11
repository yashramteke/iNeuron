/*Write a menu driven program with the following options:
    a.Check whether a given set of three numbers are lengths of an isosceles triangle or not
    b.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
    c.Check whether a given set of three numbers are equilateral triangle or not
    d.Exit */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    char choice;
    float a, b, c;

    do
    {
        printf("a. Check isosceles triangle or not\n");
        printf("b. Check right angled triangle or not\n");
        printf("c. Check equilateral triangle or not\n");
        printf("d. Exit\n\n");

        fflush(stdin);
        
        printf("Enter choice = ");
        scanf("%c", &choice);

        if ((choice == 'a') || (choice == 'b') || (choice == 'c'))
        {
            printf("Enter three values for triangle = ");
            scanf("%f %f %f", &a, &b, &c);
        }

        switch (choice)
        {
        case 'a':
        {
            if ((a == b) && (a == c) && (b == c))
            {
                printf("This is not isosceles triangle");
                getch();
                system("cls");
            }
            else if ((a == b) || (a == c) || (b == c))
            {
                printf("This is isosceles triangle");
                getch();
                system("cls");
            }
        }
        break;

        case 'b':
        {
            if ((a * a) + (b * b) == (c * c))
            {
                printf("This is right angle triangle");
                getch();
                system("cls");
            }
            else
            {
                printf("This is not right angle triangle");
                getch();
                system("cls");
            }
        }
        break;

        case 'c':
        {
            if ((a == b) && (a == c) && (b == c))
            {
                printf("This is equilateral triangle");
                getch();
                system("cls");
            }
            else
            {
                printf("This is not equilateral triangle");
                getch();
                system("cls");
            }
        }
        break;

        case 'd':
        {
            exit(1);
        }
        break;

        default:
        {
            printf("wrong input");
            getch();
            system("cls");
        }
        break;
        }
    } while (1);

    return 0;
}
