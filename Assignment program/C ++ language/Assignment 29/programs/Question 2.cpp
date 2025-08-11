/*Q2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
	Complex c1;
	c1.setData(3,4);
	int x;
	x=c1;
	return 0;
}*/

#include <iostream>
using namespace std;

class Complex {
	private :
		int real, imag;

	public:
		void setData (int real, int imag);

		operator int() {

			return (real + imag);
		}
};

void Complex::setData(int real, int imag) {

	this->real = real;
	this->imag = imag;

}

int main() {

	Complex c1;

	c1.setData(3, 4);

	int x;

	x = c1;

	cout << x;

}
