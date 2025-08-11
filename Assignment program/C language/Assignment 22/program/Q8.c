//Q8. Write a program to demonstrate dangling pointers in C.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int *Demo(void) {
	int a = 5;
	return &a;
}

int main() {

	int *p = Demo();

}