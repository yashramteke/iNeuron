/*Write a program to print all Armstrong numbers under 1000*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num = 100, cube, rem;

    while (num <= 1000)
    {
        int temp = num;
        cube = 0;

        while (temp)
        {
            rem = temp % 10;
            cube = cube + (rem * rem * rem);
            temp = temp / 10;
        }

        if (cube == num)
            printf("%d ", cube);

        num++;
    }

    return 0;
}