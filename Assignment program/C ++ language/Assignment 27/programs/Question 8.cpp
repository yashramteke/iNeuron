/*Q8. Consider a class Matrix
Class Matrix
{
	int a[3][3];
		Public:
		//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.*/

#include <iostream>
using namespace std;

class Matrix {

	private:
		int a[3][3];

	public:

		void input() {

			cout << "Enter Matrix Element (3x3) : " << endl;

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {

					cin >> a[i][j];
				}
			}
		}

		void disp() {

			cout << "Matrix is : " << endl;

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {

					cout << a[i][j] << " ";
				}
				cout << endl;
			}
		}

		void operator-() {

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {

					a[i][j] = -a[i][j];
				}
			}
		}

};

int main() {

	Matrix m1;

	m1.input();

	m1.disp();
	cout << endl;

	-m1;
	m1.disp();

}