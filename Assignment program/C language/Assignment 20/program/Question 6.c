//Q6. Write a program to calculate the length of the string using a pointer

#include <stdio.h>
#include <conio.h>

int main()
{
    char str[20];
    char *ptr = str;
    int i=0;

    printf("Enter String >>> ");
    fgets(str, 20, stdin);

    for(; ptr[i]; i++);

    printf("\nLength of string >>> %d\n", i-1);
}
