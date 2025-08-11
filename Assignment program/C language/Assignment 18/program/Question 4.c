// Q4) Write a function to transform string into uppercase

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
        if((str[i] >= 97) && (str[i] <= 122))
            str[i] = str[i] - 32 ;

    printf("\n%s",str);
}
