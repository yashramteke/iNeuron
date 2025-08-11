/*Write a program to check whether a given alphabet is in uppercase or lowercase.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    char ch;

    printf("Enter alphabet = ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
        printf("Lowercase");
    else if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else
        printf("wrong input");
        
    return 0;
}