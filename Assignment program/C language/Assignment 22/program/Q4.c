//Q4. Write a program to input and print text using dynamic memory allocation.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main() {

	char *name;

	name = (char *)malloc(sizeof(char) * 200);

	fgets(name, 200, stdin);

	printf("%s", name);

	free(name);

}

