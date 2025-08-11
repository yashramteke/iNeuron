// Q.6) Write a program to reverse a string.

#include<stdio.h>

int main()
{
    char str[200];
    char rev[200];
    char demo[]="abc";
    int i=0, j=0;

    printf("Enter String = ");
    fgets(str,200,stdin);

    for(;(str[i] != 10) && (str[i] != '\0'); i++);


    while(i>=0)
    {
        rev[j] = str[i];
        j = j + 1;
        i = i - 1;
    }

    printf("%s",rev);
}
