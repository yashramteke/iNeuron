// Write a function in C to read n number of values in an array and display it in reverse order.

#include <stdio.h>

void reverse(void);

int main(int argc, char *argv[])
{
    reverse();

    return 0;
}

void reverse()
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

    printf("\n\nArray element in reverse order\n\n");

    for (int i = (size-1); i >=0 ; i--)
    {
        printf("%d ", arr[i]);
    }
    
}