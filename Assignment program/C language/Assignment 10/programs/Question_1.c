// Write a function to calculate the area of a circle. (TSRS)

float areaOfCircle(float);

#include <stdio.h>

int main(int argc, char *argv[])
{

    float radius;

    printf("Enter radius = ");
    scanf("%f", &radius);

    printf("Area of circle = %.2f", areaOfCircle(radius));
    
    return 0;
}

float areaOfCircle(float radius)
{
    return (3.14 * (radius * radius));
}