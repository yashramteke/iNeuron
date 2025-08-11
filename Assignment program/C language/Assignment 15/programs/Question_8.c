// Write a function in C to print all unique elements in an array.

#include <stdio.h>

void count(void);

int main(int argc, char *argv[])
{
    count();
    return 0;
}

void count()
{
    int size, flag = 0, x = -1;

    printf("Enter size of array = ");
    scanf("%d", &size);

    int arr[size];
    int tmp[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter value arr[%d] = ", i);
        scanf("%d", &arr[i]);
        tmp[i] = -1;
    }

    for (int i = 0; i < (size - 1); i++)
    {
        flag = 0;

        for (int j = (i + 1); j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                tmp[i] = arr[i];
                tmp[j] = arr[j];
                break;
            }
        }
    }
    for (int i = 0; i < size; i++)
        {
            if (arr[i] != tmp[i])
            {
                printf("%d ", arr[i]);
            }   
        }
}