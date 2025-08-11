//Write a program in C to find the transpose of a given matrix.

#include<stdio.h>

int main()
{
    int row, col, i=0,j=0;

    printf("How many row = ");
    scanf("%d",&row);

    printf("How many column = ");
    scanf("%d",&col);

    int arr[row][col];
    int brr[col][row];

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n\ntranspose matrix :- \n\n");

    while(j<col)
    {
       brr[j][i] = arr[i][j];

       if(i < (row-1))
          i = i+1;
       else
       {
          i=0;
          j=j+1;
       }
    }

    for(int x=0; x<col; x++)
    {
      for(int y = 0; y<row; y++)
         printf("%d ",brr[x][y]);
      printf("\n");
    }
}
