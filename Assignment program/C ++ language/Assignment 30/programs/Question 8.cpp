/*Q8. Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.*/

#include <iostream>
#include <string>
using namespace std;

int digit(string s);
int symbol(string s);
int capital(string s);

int main() {

	string str;

	cout << "Enter Password : ";
	getline(cin, str);

	try {

		if (str.length() < 6) {

			throw "your password is lower than 6 character";
		}

		if (!digit(str)) {

			throw "your password does not contain digit";
		}

		if (symbol(str)) {

			throw "your password does not contain special symbol";
		}

		if (capital(str)) {

			throw "your password does not contain capital letter";

		}

	} catch (const char *s) {
		cout << s;
	}
}

int digit(string s) {

	for (int i = 0; i < s.length(); i++) {
		if ( isdigit(s[i]) )
			return 1;
	}

	return 0;
}

int symbol(string s) {

	for (int i = 0; i < s.length(); i++) {

		if (((s[i] >= 32 && s[i] <= 47)  || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96))) {

			return 0;
		}
	}
	return 1;
}

int capital(string s) {

	for (int i = 0; i < s.length(); i++) {

		if (s[i] >= 65 && s[i] <= 90) {

			return 0;
		}
	}
	return 1;
}