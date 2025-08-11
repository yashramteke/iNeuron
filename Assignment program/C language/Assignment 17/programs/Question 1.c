// Q.1) Write a program to calculate the length of the string. (without using built-in method)

#include<stdio.h>

int main()
{
    char str[20];
    int i = 0;

    printf("Enter String = ");
    fgets(str,20,stdin);

    for(i = 0; (str[i] != 10) && (str[i] != '\0'); ++i);

    printf("\nString length = %d", i);
}
