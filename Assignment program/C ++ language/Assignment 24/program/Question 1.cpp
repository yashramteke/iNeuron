//Q1. Define a function to check whether a given number is a Prime number or not.

#include <iostream>
using namespace std;

int prime(int num);

int main() {

	int num;

	cout << "Enter number = ";
	cin >> num;

	if (prime(num))
		cout << num << " is a prime number";
	else
		cout << num << " is not a prime number";

	return 0;

}

int prime(int num) {

	for (int i = 2; i < num; i++) {

		if (num % i == 0)
			return 0;
	}
	return 1;
}