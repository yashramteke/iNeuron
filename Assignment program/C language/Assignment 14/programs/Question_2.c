/*Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int arr[10], sum = 0;
    float average;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter value of a[%d] = ", i);
        scanf("%d", &arr[i]);

        sum = sum + arr[i];
    }

    printf("\n\nAverage = %.2f", sum / 10.0);

    return 0;
}