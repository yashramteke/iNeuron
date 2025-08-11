// Write a function to check whether a given number contains a given digit or not (TSRS)

#include <stdio.h>

int chkDigit(int, int);

int main(int argc, char *argv[])
{
    int num, digit;

    printf("Enter number = ");
    scanf("%d", &num);

    printf("Enter digit = ");
    scanf("%d", &digit);

    if (chkDigit(num,digit) == 1)
        printf("found");
    else
        printf("not found");

    return 0;
}

int chkDigit(int num, int digit)
{
    int rem;

    while (num != 0)
    {
        rem = num % 10;
        
        if (rem == digit)
            return 1;
        
        num/=10;
    }
    return 0;
}