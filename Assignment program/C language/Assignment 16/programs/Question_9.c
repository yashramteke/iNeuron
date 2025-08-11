//Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include<stdio.h>

int main()
{
    int row, col, count = 0;

    printf("Enter row = ");
    scanf("%d",&row);

    printf("\nEnter column = ");
    scanf("%d",&col);

    int arr[row][col];

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);

            if(arr[i][j] == 0)
            {
                count = count + 1 ;
            }
        }
    }

    if(count > (row*col)/2)
    {
        printf("\n\nthis is sparce matrix");
    }
    else
    {
        printf("\n\nthis is not a sparce matrix");
    }
}
