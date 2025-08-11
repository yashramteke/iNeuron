/*Q1. Define a class Complex to represent a complex number.
Declare instance member variables to store real and imaginary part of a complex number,
also define instance member functions to set values of complex number and print values of complex number*/

#include <iostream>
using namespace std;

class Complex {

	private:
		int r, i;

	public:
		void setValue(void) {

			cout << "Enter real part : ";
			cin >> r;

			cout << "Enter imaginary part : ";
			cin >> i;

		}

		void disp(void) {

			cout << "\nComplex number : " << r << " + " << i << "i";

		}
};

int main() {

	Complex c;

	c.setValue();
	c.disp();

}