// C program to find all roots of a quadratic equation using switch case

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int a, b, c, root1, root2, disc, i;

    printf("Enter value of a, b, c = ");
    scanf("%d %d %d", &a, &b, &c);

    disc = (b * b) - (4 * a * c);

    if (disc > 0)
        i = 0;
    else if (disc == 0)
        i = 1;
    else
        i = 2;

    switch (i)
    {
    case 0:
    {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("Roots are real and distinct\n");
        printf("Root1 = %d\nRoot2 = %d", root1, root2);
    }
    break;

    case 1:
    {
        root1 = -b / (2 * a);
        printf("Both roots are equal\n");
        printf("root1 and root2 = %d", root1);
    }
    break;

    case 2:
    {
        printf("roots are imaginery");
    }
    break;

    default:
    {
        printf("invalid input");
    }
    break;
    }

    return 0;
}