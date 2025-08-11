/*Write a program to find next Prime number of a given number*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, flag = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    while (flag == 0)
    {
        int i = 2;
        num = num + 1;

        while (i <= num / 2)
        {
            if (num % i == 0)
                break;
            else
                i++;
        }
        if ((i > num / 2) && (num > 1))
        {
            flag = 1;
            printf("%d", num);
        }
    }
    return 0;
}