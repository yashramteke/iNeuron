/*Write a program which takes a character as an input and displays its ASCII code.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    char ch;

    printf("Enter a charecter = ");
    scanf("%c", &ch);

    printf("\nASCII value = %d", ch);

    return 0;
}