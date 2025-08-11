// Write a function to sort an array of any size. (TSRS)

#include <stdio.h>

int *sort(int brr[], int size);

int main(int argc, char *argv[])
{
    int size;

    printf("Enter size = ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter value of arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n\nAfter sort\n\n");

    int *brr = sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", brr[i]);
    }

    return 0;
}

int *sort(int brr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (brr[i] > brr[j])
            {
                int tmp = brr[j];
                brr[j] = brr[i];
                brr[i] = tmp;
            }
        }
    }

    return brr;
}