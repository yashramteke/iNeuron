/*Q1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.*/

#include <iostream>
using namespace std;

int main() {

	int a;

	cout << "Enter number : ";
	cin >> a;

	try {

		if ( (a % 2) == 0)
			throw a;
		else
			throw "odd number : ";

	} catch (int a) {
		cout << "even number : " << a;

	} catch (const char *s ) {
		cout << s << a;

	}
}