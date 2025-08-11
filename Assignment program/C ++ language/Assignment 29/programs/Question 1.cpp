/*Q1. Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
	Complex c1;
	Int x=5;
	c1=x;
	return 0;
}*/

#include <iostream>
using namespace std;

class Complex {

	private:
		int real, imag;

	public:

		void operator =(int x) {

			real = x;
			imag = x;
		}

		void disp(void) {

			cout << real << " + " << imag << "i";
		}


};


int main() {

	Complex c1;

	int x = 5;

	c1 = x;
	c1.disp();
}

