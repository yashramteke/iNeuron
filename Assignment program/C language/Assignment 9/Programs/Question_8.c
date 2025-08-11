// Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    int i = num > 0;
    
    switch (i)
    {
    case 1:
        printf("number convert into negative = %d", num * -1);
        break;
    case 0:
        printf("number convert into positive =  %d", num * -1);
        break;
    default:
        printf("invalid input");
        break;
    }

    return 0;
}