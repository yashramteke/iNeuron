/*Q1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. == */

#include <iostream>
using namespace std;

class Complex {

	private:
		int real, imag;

	public:
		void setData(void) {

			cout << "Enter real part of Complex : ";
			cin >> real;

			cout << "Enter imaginary part of Complex : ";
			cin >> imag;

			cout<<endl<<endl;
		}

		void showData(void){
            cout<<real<<" + "<<imag<<"i"<<endl;
		}

		Complex operator+ (Complex);
		Complex operator- (Complex);
		Complex operator* (Complex);
		int operator== (Complex);
};


int main() {

	Complex c1, c2, ans;

	cout << "Enter data for c1"<<endl;
	c1.setData();

	cout << "Enter data for c2" <<endl;
	c2.setData();


	ans = c1 + c2;
	cout<<"Addition : ";
	ans.showData();
	cout<<endl;

	ans = c1 - c2;
	cout<<"Subtraction : ";
	ans.showData();
	cout<<endl;

	ans = c1 * c2;
	cout<<"Multiplication : ";
	ans.showData();
    cout<<endl;

	if( c1 == c2 )
        cout<<"c1 is equal to c2";
    else
        cout<<"c1 is not equal to c2";

}

Complex Complex::operator+ (Complex  x){

    Complex ans;
    ans.real = real + x.real;
    ans.imag = imag + x.imag;

    return ans;
}

Complex Complex::operator- (Complex c){

    Complex ans;

    ans.real = real - c.real;
    ans.imag = imag - c.imag;

    return ans;
}

Complex Complex::operator* (Complex c){

    Complex ans;

    ans.real = real * c.real;
    ans.imag = imag * c.imag;

    return ans;
}

int Complex::operator== (Complex c){

    if( (real == c.real)&&(imag == c.imag) )
        return 1;
    else
        return 0;
}
