//Q8. Write a program to compute the sum of all elements in an array using pointers.

#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        sum = *(ptr+i) + sum;
    }

    printf("Sum = %d", sum);

}
