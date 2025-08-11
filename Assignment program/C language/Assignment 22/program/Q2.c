/*Q2. Write a program to ask the user to input a number of data values he would like to enter
then create an array dynamically to accommodate the data values.
Now take the input from the user and display the average of data values*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int input() {

	int total_num = 2, sum = 0;

	printf("Enter the total input you want to enter -> ");
	scanf("%d", &total_num);

	int *num_arr = (int *)malloc(sizeof(int) * total_num);

	for (int i = 0; i < total_num; i++) {
		printf("%d)= ", i + 1);
		scanf("%d", &num_arr[i]);

		sum = sum + num_arr[i];
	}

	return (sum / total_num);
}

int main() {

	int avg = input();

	printf("Average = %d", avg);
}

