/*Write a program in C to copy the elements of one array into another array.Take array values from the user.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter array size = ");
    scanf("%d",&num);

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter value of a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    int brr[num];

    for (int i = 0; i < num; i++)
        brr[i] = arr[i];
    
    return 0;
}