// Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.

#include <stdio.h>
#include <stdlib.h>

int fun(void);

int main(int argc, char *argv[])
{

    printf("\n\nduplicate values = %d", fun());

    return 0;
}

int fun()
{
    int size;

    printf("Enter size of array = ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter value arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < (size - 1); i++)
    {
        if (arr[i] == arr[i + 1])
            return arr[i];
    }
    
    exit(0);
}