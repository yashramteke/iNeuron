// Write a function to print first N prime numbers (TSRN)

#include <stdio.h>

void prime(int);

int main(int argc, char *argv[])
{
    int a;

    printf("Enter number = ");
    scanf("%d", &a);

    prime(a);

    return 0;
}

void prime(int a)
{
    int i = 2, num = 1, flag=0;

    while (num <= a)
    {
        while (num / 2 >= i)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
            else
                i = i + 1;
        }
        if (flag == 0)
            printf("%d ", num);

        i = 2;
        num = num + 1;
        flag = 0;
    }
}
