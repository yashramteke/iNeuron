// Write a function in C to merge two arrays of the same size sorted in descending order.

#include <stdio.h>

void merge(void);

int main(int argc, char *argv[])
{

    merge();

    return 0;
}

void merge()
{
    int size, i = 0, j = 0, k = 0;

    printf("Enter size of array = ");
    scanf("%d", &size);

    int arr1[size], arr2[size], arr3[size * 2];

    for (int x = 0; x < size; x++)
    {
        printf("Enter value arr1[%d] = ", x);
        scanf("%d", &arr1[x]);
    }

    printf("\n\n");

    for (int x = 0; x < size; x++)
    {
        printf("Enter value arr2[%d] = ", x);
        scanf("%d", &arr2[x]);
    }

    while ((i < size) && (j < size))
    {
        if (arr1[i] > arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    if (i > 4)
    {
        while (j < size)
        {
            arr3[k] = arr2[j];
            j++;
            k += 1;
        }
    }
    else if (j > 4)
    {
        while (i < size)
        {
            arr3[k] = arr1[i];
            i++;
            k += 1;
        }
    }

    for (int x = 0; x < (size * 2); x++)
    {
        printf("%d ", arr3[x]);
    }
}