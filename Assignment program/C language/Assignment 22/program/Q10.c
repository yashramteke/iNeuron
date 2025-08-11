//Q10. Find out the maximum and minimum from an array using dynamic memory allocation in C.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


int main() {
	int size, small = 0, large = 0;

	printf("How much number you want to enter : ");
	scanf("%d", &size);

	int *arr = (int *)malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {

		printf("%d) ", i);
		scanf("%d", &arr[i]);

		if (large < arr[i])
			large = arr[i];
		else
			small = arr[i];
	}

	printf("largest = %d  and  smallest = %d", large, small);
}