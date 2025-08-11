//Q1. Write a function to swap values of two in variables of calling function. (TSRN)

#include <stdio.h>
#include <conio.h>

void swap(int *x, int *y);

int main()
{
    int a, b;

    printf("Enter a & b = ");
    scanf("%d %d", &a, &b);

    swap(&a,&b);

    printf("a = %d & b = %d",a,b);
}

void swap(int *x, int *y)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}
