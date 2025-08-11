// Write a function in C to count a total number of duplicate elements in an array.

#include <stdio.h>

void count(void);

int main(int argc, char *argv[])
{
    count();
    return 0;
}

void count()
{
    int size, count = 0;

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

    for (int i = 0; i < (size - 1);)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count += 1;
                tmp[j] = j;
            }
        }
        i += 1;

        while (i == tmp[i])
        {
            i += 1;
        }
    }

    printf("\n\nTotal number of duplicate element = %d", count);
}