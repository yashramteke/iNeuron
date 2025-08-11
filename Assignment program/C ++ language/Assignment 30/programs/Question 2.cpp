//Q2. Write a C++ program to demonstrate try, throw and catch statements.

#include <iostream>
using namespace std;


int main() {

	float a, b;

	cout << "Enter two numbers : ";
	cin >> a >> b;

	try {

		if (b == 0)
			throw "divide by zero error";

		cout << "Answer : " << a / b;
	} catch (const char *s) {

		cout << s;
	}

}
