/*Q6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/

#include <iostream>
#include <string.h>

using namespace std;

class CString {

	private:
		char str[10];

	public:

		void set(void);

		char *operator+ (const CString);

		int operator== ( CString);
};

int main() {

	CString s1, s2;

	char *p;

	s1.set();
	s2.set();

	cout << endl;

	if ((s1 == s2) == 0)
		cout << "Strings are same";
	else
		cout << "Strings are not same";

	cout << endl;

	p = s1 + s2;
	cout << "concat string = " << p;

}

void CString::set(void) {

	cout << "Enter string : ";
	fgets(str, 10, stdin);

	int len = strlen(str);

	if (str[len - 1] == 10) {

		str[len - 1] = '\0';
	}

	fflush(stdin);
}

char *CString::operator+ (const CString tmp) {

	return strcat(str, tmp.str);
}

int CString::operator==( CString tmp) {

	return (strcmp(str, tmp.str));
}