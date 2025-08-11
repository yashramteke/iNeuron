// Write a recursive function to print binary of a given decimal number

#include <stdio.h>

void rec(int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d",&num);

    rec(num);

    return 0;
}

void rec(int num)
{
    if (num == 0)
        return;
        
    int bin = num % 2;
    rec(num / 2);

    printf("%d", bin);
}