/*Write a program to find the Nth term of the Fibonnaci series.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, a = 0, b = 1, c;

    printf("Enter number = ");
    scanf("%d", &num);

    for (int i = 2; i < num; ++i)
    {
        c = a + b;
        a = b;
        b = c;
    }

    printf("%d ", c);

    return 0;
}
