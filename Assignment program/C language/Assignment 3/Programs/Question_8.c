/*Write a program to check whether a given year is a leap year or not.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int year;

    printf("Enter year = ");
    scanf("%d", &year);
    
    if (year % 4 == 0)
        printf("This is a leap year");
    else
        printf("This is not a leap year");
    
    return 0;
}