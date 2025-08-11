/*Write a program to find the smallest number stored in an array of size 10. Take array values from the user.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int arr[10], smallest = 0, j = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter value of a[%d] = ", i);
        scanf("%d", &arr[i]);

        if (i > 0)
            if (arr[j] > arr[i])
                j = i;
    }

    printf("\n\nSmallest = %d", arr[j]);

    return 0;
}