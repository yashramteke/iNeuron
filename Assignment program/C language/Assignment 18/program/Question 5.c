// Q5) Write a function to transform a string into lowercase

#include<stdio.h>

void fun(char str[]);

int main()
{
    char str[200];
    int count = 0;

    printf("Enter String = ");
    fgets(str,200,stdin);

    fun(str);
}

void fun(char str[])
{
    for(int i=0; (str[i] != 10) && (str[i] != '\0'); i++)
        if((str[i] >= 65) && (str[i] <= 90))
            str[i] = str[i] + 32 ;

    printf("\n%s",str);
}
