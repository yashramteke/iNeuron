//Q3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include <stdio.h>
#include <conio.h>
#include <string.h>

void sort(int *, int);

int main()
{
    int a[10] = {8,2,4,6,9,3,0,7,1,5};//{0,8,4,6,9,3,2,7,1,5}

    sort(a,10);

    for(int i=0; i<10;i++)
    {
        printf("%d ",a[i]);
    }
}

void sort(int *ptr, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(ptr[i] > ptr[j])
            {
                int tmp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = tmp;
            }
        }
    }
}
