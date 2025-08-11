/*Q9.Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com.*/

#include <iostream>
using namespace std;

int valid(string str);

int main() {

	string str;

	cout << "Enter Gmail id : ";
	getline(cin, str);

	try {

		if (valid(str)) {
			throw "Enter correct gmail id";
		} else {
			cout << "Gmail id correct";
		}
	} catch (const char *s) {
		cout << s;
	}
}

int valid(string str) {

	if (str.at(0) != '@') {

		string s = "@gmail.com";

		int f = str.find(s);

		if (f == -1) {
			return 1;
		} else {
			return 0;
		}

	} else {
		return 1;
	}
}