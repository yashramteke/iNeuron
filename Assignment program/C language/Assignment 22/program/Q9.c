//Q9. Write a program to allocate memory dynamically of the size in bytes entered by the user.
//Also handle the case when memory allocation is failed.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


int main() {

	int byte;

	printf("How much bytes you want to enter -> ");
	scanf("%d", &byte);

	char *str = (char *)malloc(byte + 1);

	if (str == NULL) {
		printf("Error : memory not allocate");
	} else {

		printf("Enter name : ");

		for (int i = 0; i < byte; i++)
			str[i] = getche();
		str[byte] = '\0';
		printf("\n%s", str);

	}
}