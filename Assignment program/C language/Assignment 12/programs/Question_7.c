// Write a recursive function to print squares of first N natural numbers

#include <stdio.h>

int rec(int);

int main(int argc, char *argv[])
{
    int num;

    printf("Enter number = ");
    scanf("%d",&num);

    printf("%d = %d",rec(num), (num*num));

    return 0;
}

int rec(int num)
{
    if (num == 1)
        return num;

    int ans = rec(num - 1);
    printf("%d = %d \n", ans, (ans * ans));
    
    return num;
}