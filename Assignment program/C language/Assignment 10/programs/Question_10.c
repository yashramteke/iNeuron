// Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>

void prime(int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d",&num);

    prime(num);

    return 0;
}

void prime(int num)
{
    printf("Prime factor of %d = ",num);
    for (int i = 2; i <=(num/2); i++)
    {
        if (num%i == 0)
        {
            num/=i;
            printf("%d ",i);
            i=1;
        }
    }
    printf("%d",num);
}