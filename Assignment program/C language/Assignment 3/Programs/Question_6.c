/*Write a program to print greater between two numbers. Print one number of both are the same*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b;

    printf("Enter three number = ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Greater number = %d", a);
    else if (a < b)
        printf("Greater number = %d", b);
    else
        printf("%d", a);

    return 0;
}