//Write a program in C to find the sum of right diagonals of a matrix.

#include<stdio.h>

int main()
{
    int size, col, sum=0;

    printf("Enter size to create matrix = ");
    scanf("%d",&size);

    col=size - 1;

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
        sum = sum + arr[i][col-i];
    }

    printf("\n\nsum of right diagonal = %d", sum);
}
