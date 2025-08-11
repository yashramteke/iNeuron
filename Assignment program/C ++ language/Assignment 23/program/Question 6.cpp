//Q6. Write a C++ program to calculate an average of 3 numbers.

#include <iostream>
using namespace std;

int main() {

	float a, b, c, avg;

	cout << "Enter 1st Number = ";
	cin >> a;

	cout << "Enter 2nd Number = ";
	cin >> b;

	cout << "Enter 3rd Number = ";
	cin >> c;

	avg = (a + b + c) / 3;

	cout << "\nAverage of Three numbers = " << avg;

}