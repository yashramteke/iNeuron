/*Write a program to print size of an int, a float, a char and a double type variable*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Size of int = %d byte\n", sizeof(int));
    printf("Size of float = %d byte\n", sizeof(float));
    printf("Size of char = %d byte\n", sizeof(char));
    printf("Size of double = %d byte\n", sizeof(double));

    return 0;
}