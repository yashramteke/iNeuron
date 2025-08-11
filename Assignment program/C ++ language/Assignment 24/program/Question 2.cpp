//Q2. Define a function to find the highest value digit in a given number.

#include <iostream>
using namespace std;

int highest(int num);

int main() {
	int num;

	cout << "Enter number = ";
	cin >> num;

	cout << "Heighest number = " << highest(num);
}

int highest(int num) {

	int digit, h = 0;

	while (num != 0) {

		digit = num % 10;
		num = num / 10;

		if (h < digit)
			h = digit;
	}

	return h;
}