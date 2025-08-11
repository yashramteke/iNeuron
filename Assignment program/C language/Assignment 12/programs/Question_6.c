// Write a recursive function to print first N even natural numbers in reverse order

#include <stdio.h>

void rec(int, int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    rec(num, num * 2);

    return 0;
}

void rec(int num, int even)
{
    if (num == 0)
        return;

    if (even % 2 == 0)
    {
        printf("%d ", even);
        num = num - 1;
    }

    rec(num, even - 1);
}