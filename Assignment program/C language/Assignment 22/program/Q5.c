//Q5. Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main() {

	int arr[10] = {45, 12, 80, 42, 36, 94, 28, 59, 43, 19};
	int *drr = (int *)malloc(sizeof(int));
	int i = 0, sum = 0;

	do {
		drr[i] = arr[i];

		int *tmp = (int *)malloc(sizeof(int) * (i + 1));
		for (int j = 0; j <= i; j++)
			tmp[j] = drr[j];

		free(drr);
		i++;
		drr = (int *)malloc(sizeof(int) * (i + 1));

		for (int j = 0; j <= (i - 1); j++) {
			drr[j] = tmp[j];
		}
		free(tmp);

	} while (i < 10);

	printf("Inputted array : ");
	for (int j = 0; j < 10; j++) {
		printf("%d ", drr[j]);

		sum = sum + drr[j];
	}

	free(drr);

	printf("\n\nSum of all elements : %d", sum);

}

