// Program to Convert even number into its upper nearest odd number using Switch Statement.

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    int i = ((num % 2) ^ ((num > 0)&&(num!=0)));

    switch (i)
    {
    case 0:
        printf("Enter even number");
        break;

    case 1:
        printf("nearest odd number = %d", num + 1);
        break;

    default:
        printf("invalid input");
        break;
    }

    return 0;
}