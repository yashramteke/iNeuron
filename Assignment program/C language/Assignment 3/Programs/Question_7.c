/*Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c;

    printf("Enter value for a, b and c = ");
    scanf("%d %d %d", &a, &b, &c);

    int d = (b * b) - (4 * a * c);

    if (d > 0)
        printf("Real & Distinct");
    else if (d == 0)
        printf("Real & Equal");
    else
        printf("Imaaginary");

    return 0;
}