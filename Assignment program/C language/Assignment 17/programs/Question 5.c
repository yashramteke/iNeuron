// Q.5) Write a program to convert a given string into lowercase

#include<stdio.h>

int main()
{
    char str[200];
    char rev[200];

    printf("Enter String = ");
    fgets(str,200,stdin);

    for(int i=0; (str[i] != 10) && (str[i] != '\0'); i++)
        if((str[i] >= 65) && (str[i] <= 90))
            str[i] = str[i] + 32 ;

    printf("\n%s",str);
}
