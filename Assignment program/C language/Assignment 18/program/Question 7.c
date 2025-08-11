// Q7) Write a function to check whether a given string is palindrome or not.

#include<stdio.h>

int fun(char str[]);

int main()
{
    char str[200];
    int count = 0;

    printf("Enter String = ");
    fgets(str,200,stdin);

    if(fun(str))
    {
        printf("\nstring is palindrome");
    }
    else
    {
        printf("\nstring is not palindrome");
    }
}

int fun(char str[])
{
    int i = 0;
    char rev[200];

    for(; (str[i]!=10) && (str[i]!='\0'); i++);

    i=i-1;

    for(int j = 0; i>=0; i--,j++)
    {
        rev[j]=str[i];
        printf("%d %c\n",j,rev[j]);
    }

    i = 0;

    for(; (str[i]!=10) && (str[i]!='\0'); i++)
    {
        if(str[i] == rev[i])
        {
            continue;
        }
        else
            return 0;
    }

    return 1;

}
