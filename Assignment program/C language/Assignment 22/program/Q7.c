//Q7. Write a program to demonstrate memory leak in C..

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void Demo(void) {
	int *ptr = (int *)malloc(sizeof(int));

	int num = 100;

	ptr = &num;
}

int main() {

	Demo();

	printf("I am outside the function\n\n");
	printf("Pointer ptr is not free thats why pointer ptr is in the memory and ptr creates memory leak");
}