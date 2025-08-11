//Q7. Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.

#include <iostream>
using namespace std;

class Greatest {

	private:
		int a = 5, b = 1, c = 10;

	public:
		void largest(void) {

			if (a > b)
				if (a > c)
					cout << a << " is greater";
				else
					cout << c << " is greater";
			else if (b > c)
				cout << b << " is greater";
			else
				cout << c << " is greater";
		}
};

int main() {

	Greatest g;
	g.largest();
}