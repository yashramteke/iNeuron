//Q5. Write a C++ program to accept a mobile number and throw an exception if it does not contain 10 digits.

#include <iostream>
using namespace std;

int main() {

	char num[20];

	cout << "Enter Number : ";
	gets(num);

	try {

		if (strlen(num) > 10 || strlen(num) < 10)
			throw " does not contain 10 digits";
	} catch (const char *s) {
		cout << s;
	}

}