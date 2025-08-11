// Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>

void oddNumber(int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    oddNumber(num);
    return 0;
}

void oddNumber(int num)
{
    for (int i = 1; i <= num; i++)
        if (i % 2 != 0)
            printf("%d ", i);
}