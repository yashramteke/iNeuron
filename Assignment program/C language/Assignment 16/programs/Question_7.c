//Write a program in C to print or display the lower triangular of a given matrix.

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
        for(int j = 0; j<=i; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
