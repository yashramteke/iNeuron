// Program to check whether a year is a leap year or not. Using switchstatement

#include <stdio.h>

int main(int argc, char *argv[])
{
    int year, reminder;

    printf("Enter year = ");
    scanf("%d", &year);

    switch (year % 4)
    {
    case 0:
        printf("leap year");
        break;

    default:
        printf("not a leap year");
        break;
    }
    return 0;
}