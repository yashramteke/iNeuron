// Write a function to print PASCAL Triangle. (TSRN)

#include <stdio.h>

int fact(int);
int nCr(int, int);
void PascalTriangle(int);

int main(int argc, char *argv[]) {
	int value;

	printf("Enter value = ");
	scanf("%d", &value);

	PascalTriangle(value);

	return 0;
}

int fact(int num) {
	int ans = 1;

	for (int i = 2; i <= num; i++)
		ans *= i;

	return ans;
}

int nCr(int n, int r) {
	return (fact(n) / (fact(r) * fact(n - r)));
}

void PascalTriangle(int num) {
	int space = num;

	for (int i = 0; i < num; i++) {
		for (int x = 1; x < space; x++) {
			printf(" ");
		}

		for (int j = 0; j <= i; j++) {
			int ncr = nCr(i, j);

			if (ncr <= 9)
				printf("%2d ", ncr);
			else
				printf("%d ", ncr);
		}
		printf("\n");
		space = space - 1;
	}
}