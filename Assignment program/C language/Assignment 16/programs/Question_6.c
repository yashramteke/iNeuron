//Write a program in C to find the sum of rows and columns of a Matrix.

#include<stdio.h>

int main()
{
    int size, col, SoR=0, SoC=0;

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
        for(int j = 0; j<size; j++)
        SoR = SoR + arr[i][j];
    }

    printf("\n\n\nSum of row = %d", SoR);

    for(int i = 0; i<size; i++)
    {
        for(int j = 0; j<size; j++)
        SoC = SoC + arr[j][i];
    }
    printf("\n\n\nSum of column = %d", SoC);
}
