//Q1. Define a function to input variable length string and store it in an array without memory wastage.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

char *input() {

	char ch;
	char *p, *q;
	int len = 1, i;

	p = (char *)malloc(len);

	while ((ch = getche()) != 13) {

		p[len - 1] = ch;
		q = (char *)malloc(len + 1);
		for (i = 0; i < len; i++)
			q[i] = p[i];
		q[i] = '\0';

		free(p);
		len++;

		p = (char *)malloc(len);
		for (i = 0; i < len; i++)
			p[i] = q[i];

		free(q);
	}
	return p;
}

int main() {
	char *z = input();
	printf("your text -> %s", z);
}

