//Q3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main() {

	int num, *arr;
	int sum = 0;

	printf("How many times you enterd number = ");
	scanf("%d", &num);

	arr = (int *)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		printf("%d) = ", i + 1);
		scanf("%d", &arr[i]);

		sum = sum + arr[i];
	}

	free(arr);

	printf("Sum = %d", sum);

}

