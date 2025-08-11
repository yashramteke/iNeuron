/*Q9.Consider the following class mystring

Class mystring
{
	char str [100];
	Public:
		// methods
};

Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/

#include <iostream>
using namespace std;

class mystring {

	private:
		char str[100];

	public:
		void get() {

			cout << "Enter string : ";
			fgets(str, 100, stdin);
		}

		void display() {

			cout << str;
		}

		void operator!() {

			for (int i = 0; str[i] != '\0'; ++i) {

				if (str[i] >= 65 && str[i] <= 96) {

					str[i] = str[i] + 32;
				} else if (str[i] >= 97 && str[i] <= 122) {

					str[i] = str[i] - 32;
				}
			}

		}
};

int main() {

	mystring s1;

	s1.get();
	cout << endl;

	cout << "Converted String : ";
	!s1;
	s1.display();
}