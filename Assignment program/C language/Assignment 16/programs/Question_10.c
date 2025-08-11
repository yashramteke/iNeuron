//Write a program in C to find the row with maximum number of 1s.

#include<stdio.h>

int main()
{
    int row, col, count = 0, max =0;

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

            if(arr[i][j] == 1)
            {
                count = count + 1 ;
            }
        }
        if(count > max)
        {
            max = i;
        }
        count = 0;
    }

    printf("\n\nrow with maximum number of 1s = %d", max);
}
