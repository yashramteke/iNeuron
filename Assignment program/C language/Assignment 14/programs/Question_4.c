/*Write a program to find the greatest number stored in an array of size 10. Take array values from the user.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int arr[10], greatest = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter value of a[%d] = ", i);
        scanf("%d", &arr[i]);

        if (greatest < arr[i])
            greatest = arr[i];
    }

    printf("\n\nGreatest number = %d", greatest);

    return 0;
}