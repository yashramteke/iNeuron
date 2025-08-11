// Write a function to print first N natural numbers (TSRN)

#include <stdio.h>

void naturalNumber(int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d", &num);

    naturalNumber(num);

    return 0;
}

void naturalNumber(int num)
{
    for (int i = 1; i <= num; i++)
        printf("%d ", i);
}