// Write a function in C to count the frequency of each element of an array.

#include <stdio.h>

void fun();

int main(int argc, char *argv[])
{
    fun();
    return 0;
}

void fun()
{
    int size;

    printf("Enter array size = ");
    scanf("%d", &size);

    int arr[size], tmp[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter value of arr[%d] = ", i);
        scanf("%d", &arr[i]);
        tmp[i] = -1;
    }

    for (int i = 0; i < (size - 1); i++)
    {
        int count = 1;

        for (int j = (i + 1); j < size; j++)
        {
            if (arr[i] == arr[j] && arr[i] != tmp[i])
            {
                count += 1;
                tmp[j] = arr[j];
            }
        }
        if (arr[i] != tmp[i])
        {
            printf("%d = ", arr[i]);
            printf("%d\n", count);
        }
    }
}