//Q7. Create an Integer class and overload logical not operator for that class.

#include <iostream>
using namespace std;

class Integer {

	private:
		int x;

	public:

		Integer(int a): x(a) {
		}

		int operator !() {

			return -x;
		}

};

int main() {

	Integer i = -5;

	cout << !i;
}