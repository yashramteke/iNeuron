// Write a function to find the greatest number from the given array of any size. (TSRS)

#include <stdio.h>

int greatest(int brr[], int);

int main(int argc, char *argv[])
{
    int size;

    printf("Enter array size = ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter value of arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Greatest number = %d", greatest(arr, size));

    return 0;
}

int greatest(int brr[], int size)
{
    int point = brr[0];

    for (int i = 0; i < (size - 1); i++)
        if (point < brr[i + 1])
            point = brr[i + 1];

    return point;
}