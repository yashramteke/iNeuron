/*Q7. Define a C++ class fraction

class fraction
{
		long numerator;
		long denominator;
	Public:
		fraction (long n=0, long d=0);
}

Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.*/

#include <iostream>
using namespace std;

class fraction {

	private:
		long numerator;
		long denominator;

	public:
		fraction (long n = 0, long d = 0) {

			numerator = n;
			denominator = d;
		};

		friend void operator<<(ostream &out, fraction &tmp) {

			out << tmp.numerator << "/" ;
			out << tmp.denominator;
		}

		friend void operator>>(istream &in, fraction &tmp) {

			cout << "Numerator : ";
			in >> tmp.numerator;

			cout << "Denominator : ";
			in >> tmp.denominator;
		}

		fraction operator++(int) {

			fraction tmp = *this;

			numerator++;
			denominator++;

			return tmp;
		}

		fraction &operator++() {

			++numerator;
			++denominator;

			return *this;
		}
};

int main() {

	fraction f1, f2;

	cout << "f1 : " << f1 ;
	cout << endl;
	cout << "f2 : " << f2 ;
	cout << endl;

	cout << "Enter 1st Fraction value" << endl << endl;
	cin >> f1;

	cout << endl;

	cout << "f1++ : ";
	f1++;
	cout << f1 ;
	cout << endl;

	cout << "++f1 : ";
	++f1;
	cout << f1 ;

	cout << endl << endl;

	cout << "Enter 2nd Fraction value" << endl << endl;
	cin >> f2;

	cout << endl;

	cout << "f2 = ++f1" << endl;
	f2 = ++f1;
	cout << "f1 : " << f1;
	cout << endl << "f2 : " << f2 ;

	cout << endl << endl;

	cout << "f2 = f1++" << endl;
	f2 = f1++;
	cout << "f1 : " << f1;
	cout << endl;
	cout << "f2 : " << f2;
}