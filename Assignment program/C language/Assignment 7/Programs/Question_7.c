/*Write a program to print all Prime numbers between two given numbers*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num1, num2, i = 2, flag = 0;

    printf("Enter two numbers = ");
    scanf("%d %d", &num1, &num2);

    while (num1 <= num2)
    {
        while (i <= num1 / 2)
        {
            if (num1 % i != 0)
                i++;
            else
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            flag = 0;
        else if ((num1 != 0) && (num1 != 1))
            printf("%d ", num1);

        num1++;
        i=2;
    }

    return 0;
}