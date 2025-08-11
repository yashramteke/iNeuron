/*WAP to find the area of the circle.
Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”.
Replace A with area & R with radius.*/

#include <stdio.h>

int main()
{
    float radius;

    printf("Enter radius of a circle = ");
    scanf("%f", &radius);
    printf("Area of circle is %.2f having the radius %.2f", 3.14f * (radius * radius), radius);

    return 0;
}