//Write a recursive function to print octal of a given decimal number

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

    int oct = num % 8;
    rec(num / 8);
    
    printf("%d", oct);
}