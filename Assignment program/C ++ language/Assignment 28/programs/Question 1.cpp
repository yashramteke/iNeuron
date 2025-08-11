/*Q1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a.<< insertion operator
b.>> extraction operator*/

#include <iostream>
using namespace std;

class Complex {

	private:
		int real, imag;

	public:

		friend istream &operator >>(istream &in, Complex &c1);
		friend ostream &operator <<(ostream &out, Complex &c1);

		void disp() {
			cout << real;
			cout << imag;
		}
};

istream &operator >>(istream &in, Complex &c1) {
	in >> c1.real;
	in >> c1.imag;

	return in;
}

ostream &operator<<(ostream &out, Complex &c1) {
	out << c1.real << " + " << c1.imag << "i";

	return out;
}


int main() {

	Complex c;

	cout << "Enter Complex Number : ";
	cin >> c;
	cout << c;

}

