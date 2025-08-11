// Q.4) Write a program to convert a given string into uppercase

#include<stdio.h>

int main()
{
    char str[200];
    int count = 0;

    printf("Enter String = ");
    fgets(str,200,stdin);

    for(int i=0; (str[i] != 10) && (str[i] != '\0'); i++)
        if((str[i] >= 97) && (str[i] <= 122))
            str[i] = str[i] - 32 ;

    printf("\n%s",str);
}
