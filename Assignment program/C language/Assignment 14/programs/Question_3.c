/*Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10.
Take array values from the user.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int arr[10], even =0, odd = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter value of a[%d] = ", i);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even = even + arr[i];
        else
            odd = odd + arr[i];
    }

    printf("\n\nSum of even = %d", even);
    printf("\nSum of odd = %d", odd);

    return 0;
}