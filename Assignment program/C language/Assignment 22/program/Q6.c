//Q6. Write a program in C to find the largest element using Dynamic Memory Allocation.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main() {

	int size, larg = 0;

	printf("How many elements you want to enter: ");
	scanf("%d", &size);
	int *arr = (int *)calloc(size, sizeof(int));

	for (int i = 0; i < size; i++) {
		printf("%d) ", i + 1);
		scanf("%d", &arr[i]);

		if (arr[larg] < arr[i]) {
			larg = i;
		}
	}

	printf("Largest element : %d", arr[larg]);
	free(arr);
}