/*Write a program to find the greatest among three given numbers.
Print number once if the greatest number appears two or three times.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c;

    printf("Enter three number = ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
        if (a > c)
            printf("Greater number = %d", a);
        else
            printf("Greater number = %d", c);
    else if (b > c)
        printf("Greater number = %d", b);
    else
        printf("Greater number = %d", c);

    return 0;
}