/*Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right.
(For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left,
then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/

#include <stdio.h>

void rotation(int arr[], int size, int n, int d);

int main(int argc, char *argv[])
{
    int size, n, d;

    printf("Enter array size = ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter value of arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n\nEnter n position = ");
    scanf("%d", &n);

    printf("\n\nEnter direction (1 for left & 2 for right) = ");
    scanf("%d", &d);

    rotation(arr, size, n, d);

    return 0;
}

void rotation(int arr[], int size, int n, int d)
{
    if (n >= size)
    {
        printf("Enter n positions smaller than array size");
    }
    else if (d == 1)
    {
        for (int i = 0; i < n; i++)
        {
            int tmp = arr[0];

            for (int j = 0; j < (size - 1); j++)
            {
                arr[j] = arr[j + 1];
            }

            arr[size - 1] = tmp;
        }

        printf("\n\nAfter left rotation\n\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else if (d == 2)
    {
        for (int i = 0; i < n; i++)
        {
            int tmp = arr[size - 1]; // 1 1 2 3 4 5

            for (int j = (size - 1); j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }

            arr[0] = tmp;
        }

        printf("\n\nAfter right rotation\n\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}