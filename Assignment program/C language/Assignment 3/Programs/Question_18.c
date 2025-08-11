/*Write a program which takes the month number as an input and display number of days in that month*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter month number = ");
    scanf("%d", &num);

    if (num >= 1 && num <= 7)
        if (num % 2 != 0)
            printf("31 Days");
        else if (num == 2)
            printf("28 or 29 Days");
        else
            printf("30 Days");
    else if (num % 2 == 0)
        printf("31 Days");
    else
        printf("30 Days");

    return 0;
}