//Q10. Write a program to print a string in reverse using a pointer

#include <stdio.h>
#include <conio.h>

int main()
{
    char arr[13] = "Hello World";
    char *ptr = arr;

    for(int i = 10; i >= 0; i--)
    {
        printf("%c", *(ptr+i));
    }

}
