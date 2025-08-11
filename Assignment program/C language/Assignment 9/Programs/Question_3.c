// Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include <stdio.h>

int main(int argc, char *argv[])
{

    int day;

    printf("Enter day number = ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
    {
        printf("This is your day !!! Enjoy Your Day !!!");
    }
    break;

    case 2:
    {
        printf("Good Morning....This is Working Day");
    }
    break;

    case 3:
    {
        printf("I hope you’re having a wonderful day");
    }
    break;

    case 4:
    {
        printf("Dont worry Be happy");
    }
    break;

    case 5:
    {
        printf("You are the brightest star on Earth.");
    }
    break;

    case 6:
    {
        printf("Kick the negative energy out");
    }
    break;

    case 7:
    {
        printf("This is the best day of the week.");
    }
    break;

    default:
    {
        printf("wrong input");
    }
    break;
    }
    return 0;
}