/*Q7. Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.*/

#include <iostream>
#include <string>
using namespace std;

int digit(string s);
int symbol(string s);

int main() {

	string str;

	cout << "Enter Username : ";
	getline(cin, str);

	try {

		if (str.length() > 6) {

			if (!digit(str)) {

				if (symbol(str))
					throw "if your username is greater than 6 character then include digit or special symbol";
			}
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