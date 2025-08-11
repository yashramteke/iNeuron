//Write a program in C to find the sum of left diagonals of a matrix.

#include<stdio.h>

int main()
{
    int size, col, sum=0;

    printf("Enter size to create matrix = ");
    scanf("%d",&size);

    int arr[size][size];

    for(int i = 0; i<size; i++)
    {
        for(int j = 0; j<size; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i<size; i++)
    {
        sum = sum + arr[i][i];
    }

    printf("\n\nsum of left diagonal = %d", sum);
}
