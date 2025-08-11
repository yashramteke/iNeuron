//Q4. Write a C++ program to accept an email address and throw an exception if it does not contain @ symbol.

#include <iostream>
#include <conio.h>
using namespace std;

int validEmail(char *);

int main() {

	char mail[50];

	cout << "Enter email : ";
	gets(mail);

	try {

		if (validEmail(mail)) {
			throw "Not valid email";
		}
	} catch (const char *s) {
		cout << s;
	}

}

int validEmail(char *mail) {

	for (int i = 0; mail[i] != '\0'; i++) {

		if (mail[i] == '@')
			return 0;
	}
	return 1;
}