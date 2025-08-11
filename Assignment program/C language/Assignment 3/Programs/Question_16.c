/*Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case),a digit or a special character.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    char ch;

    printf("Enter character = ");
    scanf("%c", &ch);

    if (ch <= 'a' && ch >= 'z')
        printf("Lowercase");
    else if (ch <= 'A' && ch >= 'Z')
        printf("Uppercase");
    else if (ch >= '0' && ch <= '9')
        printf("digit");
    else
        printf("Special symbol");

    return 0;
}