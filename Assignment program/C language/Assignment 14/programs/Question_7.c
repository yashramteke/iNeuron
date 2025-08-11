/*Write a program to find second largest in an array.Take array values from the user.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter value of a[%d] = ", i);
        scanf("%d", &arr[i]);

        if (i > 1)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > arr[i])
                {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }

    printf("\n\nSecond largest = %d",arr[8]);

    return 0;
}