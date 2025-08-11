//Q9. Write a program to print the elements of an array in reverse order.

#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;

    for(int i = 9; i >= 0; i--)
    {
        printf("%d ", *(ptr+i));
    }

}
