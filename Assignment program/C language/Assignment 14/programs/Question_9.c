/*Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter size of array = ");
    scanf("%d",&num);

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter value of a[%d] = ", i);
        scanf("%d",&arr[i]);
    }

    for (num = num-1; num > -1; num--)
        printf("%d ", arr[num]);
    
    return 0;
}