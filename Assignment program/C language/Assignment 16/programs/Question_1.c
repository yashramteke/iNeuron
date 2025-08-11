// Write a program to calculate the sum of two matrices each of order 3x3.

#include <stdio.h>

int main(int argc, char *argv[])
{
    int count = 0, k = 0, i = 0;
    int arr1[3][3];
    int arr2[3][3];
    int ans[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value arr1[%d][%d]= ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value arr2[%d][%d]= ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\n\nAnswer :-\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}