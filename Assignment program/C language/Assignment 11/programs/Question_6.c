// Write a function to print all Prime numbers between two given numbers. (TSRN)

#include <stdio.h>

void prime(int, int);

int main(int argc, char *argv[])
{
    int a, b;

    printf("Enter two number = ");
    scanf("%d %d", &a, &b);

    prime(a, b);

    return 0;
}

void prime(int a, int b)
{
    int i = 2, flag = 0;

    while (a <= b)
    {
        while (a / 2 >= i)
        {
            if (a % i == 0)
            {
                flag = 1;
                break;
            }
            else
                i = i + 1;
        }
        if (flag == 0)
            printf("%d ", a);

        i = 2;
        a = a + 1;
        flag = 0;
    }
}