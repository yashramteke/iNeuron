/*Q10.
Class Matrix
{
		int a[3][3];
	Public:
		//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).*/

#include <iostream>
using namespace std;

class Matrix {

	private:
		int a[3][3];

	public:
		void set(void);
		void display(void);
		Matrix operator+(Matrix tmp);
};

void Matrix::set() {

	cout << "Enter matrix : ";

	for (int i = 0; i < 3; ++i) {

		for (int j = 0; j < 3; ++j) {

			cin >> a[i][j];
		}
	}
}

void Matrix::display() {

	cout << "Addition is : " << endl;

	for (int i = 0; i < 3; ++i) {

		for (int j = 0; j < 3; ++j) {

			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}

Matrix Matrix::operator+(Matrix m) {

	Matrix tmp;

	for (int i = 0; i < 3; ++i) {

		for (int j = 0; j < 3; ++j) {

			tmp.a[i][j] = a[i][j] + m.a[i][j];
		}
	}

	return tmp;
}

int main() {

	Matrix m1, m2, m3;

	m1.set();
	m2.set();

	m3 = m1 + m2;

	m3.display();
}