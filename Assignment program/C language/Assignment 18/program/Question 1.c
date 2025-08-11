// Q1) Write a function to calculate length of the string

#include<stdio.h>

int fun(char str[]);

int main()
{
    char str[150];

    printf("Enter string = ");
    fgets(str,150,stdin);

    int len = fun(str);

    printf("\nlength of the string = %d", len);

}

int fun(char str[])
{
    int i=0;

    while((str[i] != 10) && (str[i] != '\0'))
        i++;

    return i;
}
