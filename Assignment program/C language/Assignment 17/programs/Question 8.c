// Q.8) Write a program in C to copy one string to another string.

#include<stdio.h>

int main()
{
    char str1[200];
    char str2[200];
    int i = 0;

    printf("Enter String 1 = ");
    fgets(str1,200,stdin);

    printf("Enter String 2 = ");
    fgets(str2,200,stdin);

    for(;(str1[i] != 10) && (str1[i] != '\0'); i++);

    for(int j = 0;(str2[j] != 10) && (str2[j] != '\0'); j++, i++)
    {
        str1[i] = str2[j];
    }

    printf("\nfinal string = %s", str1);

}
