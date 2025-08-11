// Q8) Write a function to count words in a given string

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
    int sp = 0, i = 0;

    if(str[0] == 32)
    {
        i++;
    }

    for(; str[i]!='\0'; i++)
    {
        if((str[i-1] != 32) && (str[i] == 32 || str[i] == 10))
        {
            sp = sp + 1;
        }
    }

    printf("Total Words = %d", sp);
}
