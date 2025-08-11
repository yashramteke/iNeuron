//Q4. Write a program in C to demonstrate how to handle the pointers in the program.

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("We Create Int Type of Array\n\n");
    int a[10] = {8,2,4,6,9,3,0,7,1,5};

    printf("Accessing Array Element\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n----------------------------\n\n");

    printf("We Create Int Type of Pointer -> int *ptr\n\n");
    int *ptr;
    printf("\n----------------------------\n\n");

    printf("Store Address of Array to the Pointer -> ptr = a\n\n");
    ptr = a;
    printf("\n----------------------------\n\n");

    printf("Accessing Array Element Using Pointer\n\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",*(ptr+i));
    }
}
