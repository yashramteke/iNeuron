//Q6. Create a complex class and overload assignment operator for that class.

#include <iostream>
#include <string.h>

using namespace std;

class Complex {

	private:
		int real, imag;

	public:

		Complex() {
		}

		Complex(int real, int imag) {

			this->real = real;
			this->imag = imag;
		}

		Complex operator =(const Complex &x) {

			real = x.real;
			imag = x.imag;

			return x;
		}

		void disp() {
			cout << "real : " << real << endl <<  "imag : " << imag;
		}
};

int main() {

	Complex c1(100, 6);

	Complex c2;

	c2 = c1 ;

	c2.disp();



}