/*Q6.Write a C++ program to demonstrate how a common friend function can
be used to exchange the private values of two classes. (Use call by
reference method).*/

#include <iostream>
#include <string.h>

using namespace std;

class Fun2;

class Fun1 {

	private:
		int a;

	public:
		void get(void) {
			cout << "Enter a : ";
			cin >> a;
		}

		friend void exchange(Fun1 &f1, Fun2 &f2);
		void disp(void) {
			cout << "a : " << a;
		}
};

class Fun2 {

	private:
		int b;

	public:
		void get(void) {
			cout << "Enter b : ";
			cin >> b;
		}

		void disp(void) {
			cout << "b : " << b;
		}
		friend void exchange(Fun1 &f1, Fun2 &f2);
};

void exchange(Fun1 &f1, Fun2 &f2) {

	int tmp;

	tmp = f1.a;

	f1.a = f2.b;
	f2.b = tmp;
}

int main() {


	Fun1 x;
	Fun2 y;

	x.get();
	y.get();

	exchange(x, y);

	x.disp();
	y.disp();





}