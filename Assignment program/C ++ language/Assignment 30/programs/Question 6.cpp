//Q6. Write a C++ program to accept area pin code and throw an exception if it does not contain 6 digits.

#include <iostream>
#include <string.h>

using namespace std;

int main() {

	char pin[20];

	cout << "Enter Pin code : ";
	gets(pin);

	try {

		if (strlen(pin) > 6 || strlen(pin) < 6)
			throw " does not contain 6 digits";
	} catch (const char *s) {
		cout << s;
	}
}