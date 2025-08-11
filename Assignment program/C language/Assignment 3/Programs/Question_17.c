/*Write a program which takes the length of the sides of a triangle as an input.
Display whether the triangle is valid or not*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    float a, b, c;

    printf("Enter length of the sides of an triangle = ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b >= c) && (a + c >= b) && (c + b >= a))
        printf("This triangle is valid");
    else
        printf("This triangle is not valid");

    return 0;
}