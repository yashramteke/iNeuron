/*Write a program to calculate sum of squares of first N natural numbers*/

#include <stdio.h>

int main (int argc, char *argv[]) {
int num,sum=0;

printf("Enter number = ");
scanf("%d",&num);

int tmp=num;

while (num)
{
    sum+=(num*num);
    num--;
}

printf("Sum of squares of first %d natural numbers = %d",tmp,sum);

    return 0;
}