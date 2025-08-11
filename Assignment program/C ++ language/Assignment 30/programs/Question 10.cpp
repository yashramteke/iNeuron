/*Q10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.*/

#include <iostream>
#include <string>
using namespace std;

int digit(string s);
int symbol(string s);
int space(string s);

int main() {

	string str;

	cout << "Enter Nickname : ";
	getline(cin, str);

	try {

		if (str.length() >= 9) {

			throw "your nickname is greater than 8 character";
		}

		if (digit(str)) {

			throw "your nickname contain digit";
		}

		if (symbol(str)) {

			throw "your nickname contain special symbol";
		}

		if (space(str)) {

			throw "your nickname contain space";

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

		if (((s[i] >= 33 && s[i] <= 47)  || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96))) {

			return 1;
		}
	}
	return 0;
}

int space(string s) {

	for (int i = 0; i < s.length(); i++) {

		if (s[i] == ' ') {

			return 1;
		}
	}
	return 0;
}