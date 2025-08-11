/*Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int arr[10], sum = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter value of a[%d] = ", i);
        scanf("%d", &arr[i]);

        sum = sum + arr[i];
    }

    printf("\n\nSum = %d", sum);

    return 0;
}