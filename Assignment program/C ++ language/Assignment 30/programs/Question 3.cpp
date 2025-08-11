/*Q3. Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*///

#include <iostream>
using namespace std;

float add(int x, int y) {
	return x + y;
}

float sub(int x, int y) {
	return x - y;
}

float multi(int x, int y) {
	return x * y;
}

float divide(int x, int y) {

	if (y == 0)
		throw "Divide by zero error";
	return x / y;
}

int main() {

	char opr;
	float a, b;

	cout << "Enter 1st number : ";
	cin >> a;

	cout << "Enter 2nd number : ";
	cin >> b;

	fflush(stdin);

	try {

		cout << "Enter Operator : ";
		cin >> opr;

		if ( (opr != '+' ) && (opr != '-') && (opr != '*') && (opr != '/') ) {

			throw "does not contain an operator";
		}

		switch (opr) {

			case '+':
				cout << "Addition : " << add(a, b);
				break;

			case '-':
				cout << "Subtraction : " << sub(a, b);
				break;

			case '*':
				cout << "Multiplication : " << multi(a, b);
				break;

			case '/':
				cout << "Division : " << divide(a, b);
				break;
		}
	} catch (const char *s) {
		cout << s;
	}
}