//Q4. Define a function to print Pascal Triangle up to N lines.

#include <iostream>
using namespace std;

int fact(int num);
int nCr(int n, int r);
void PascalTriangle(int row);

int main() {

	int row;

	cout << "Enter row : ";
	cin >> row;

	PascalTriangle(row);
}

int fact(int num) {

	int ans = 1;

	for (int i = 2; i <= num; i++)
		ans = ans * i;

	return ans;
}

int nCr(int n, int r) {

	return fact(n) / (fact(r) * fact(n - r));
}

void PascalTriangle(int row) {

	int space = row;

	for (int i = 0; i < row; i++) {
		for (int s = 1; s < space; s++) {
			cout << " ";
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