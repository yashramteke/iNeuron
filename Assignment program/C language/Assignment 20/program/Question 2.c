//Q2. Write a function to swap strings of two char arrays of calling functions. (TSRN)

#include <stdio.h>
#include <conio.h>
#include <string.h>

void swap(char *, char *);

int main()
{
    char a[20], b[20];

    printf("Enter string a = ");
    fgets(a, 20, stdin);

    printf("Enter string b = ");
    fgets(b, 20, stdin);

    swap(a,b);

    printf("a = %s",a);
    printf("b = %s",b);
}

void swap(char *s1, char *s2)
{
    char tmp[20];

    strcpy(tmp,s1);
    strcpy(s1,s2);
    strcpy(s2,tmp);
}
