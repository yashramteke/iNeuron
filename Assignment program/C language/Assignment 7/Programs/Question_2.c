/*Write a program to print first N terms of Fibonacci series*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, a = 0, b = 1, c;

    printf("Enter number = ");
    scanf("%d", &num);

    printf("%d %d ", a, b);

    for (int i = 2; i < num; ++i)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
