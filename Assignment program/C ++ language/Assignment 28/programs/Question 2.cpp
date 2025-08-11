/*Q2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object.
Make sure the names of formal arguments are the same as names of instance variables.*/

#include <iostream>
using namespace std;

class Complex {
	private :
		int real, imag;

	public:
		void setData (int real, int imag);
		void display(void);
};

void Complex::setData(int real, int imag) {

	this->real = real;
	this->imag = imag;

}

void Complex::display(void) {

	cout << real << " + " << imag << "i";
}

int main() {

	Complex c;

	c.setData(10, 7);
	c.display();

}
