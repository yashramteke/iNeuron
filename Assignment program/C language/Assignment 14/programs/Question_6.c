/*Write a program to sort elements of an array of size 10. Take array values from the user.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int arr[10], tmp;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter value of a[%d] = ", i);
        scanf("%d", &arr[i]);

        if (i > 0)
        {
            for (int k = 0; k < i;k++)
            {
                if (arr[k]> arr[i])
                {
                    tmp = arr[i];
                    arr[i] = arr[k];
                    arr[k] = tmp;
                }
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}