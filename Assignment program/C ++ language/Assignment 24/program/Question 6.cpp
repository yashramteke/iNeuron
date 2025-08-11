//Q6. Define a function to swap data of two int variables using call by reference.

#include <iostream>
using namespace std;

void swap(int *a, int *b);

int main() {

	int a = 2, b = 3;

	cout << "Before Swapping : a = " << a << "   b = " << b;
	swap(&a, &b);
	cout << "\nAfter Swapping : a = " << a << "   b = " << b;

}

void swap(int *a, int *b) {

	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}