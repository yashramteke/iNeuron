// Write a recursive function to print first N odd natural numbers

#include <stdio.h>

void rec(int, int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    rec(num, 1);

    return 0;
}

void rec(int num, int odd)
{
    if (num == 0)
        return;

    printf("%d ", odd);
    rec(num - 1, odd + 2);
}