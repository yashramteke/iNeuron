//Q3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.

#include <iostream>
using namespace std;

class Complex {
	private:
		int real, imag;
	public:
		void set() {

			cout << "Enter real part : ";
			cin >> real;

			cout << "Enter imaginary part : ";
			cin >> imag;
		}

		void show(void) {

			cout << real << " + " << imag << "i";
		}

		friend	Complex operator+ (Complex, Complex);

};


int main() {

	Complex c1, c2, c3;

	c1.set();
	c2.set();

	c3 = c1 + c2;

	c3.show();
}

Complex operator+ (Complex x, Complex y) {

	Complex tmp;

	tmp.real = y.real + x.real;
	tmp.imag = y.imag + x.imag;

	return tmp;
}