// Write a recursive function to print first N odd natural numbers in reverse order

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

void rec(int num, int odd)
{
    if (num == 0)
        return;

    else if (odd % 2 != 0)
    {
        printf("%d ", odd);
        num = num - 1;
    }
    rec(num, odd - 1);
    return;
}