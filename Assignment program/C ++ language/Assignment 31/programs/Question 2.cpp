/*Q2. Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class.*/

#include <iostream>
using namespace std;

class Base {

	private:

		int a, b;

	public:

		void setNum(int x, int y) {

			a = x;
			b = y;
		}

		int add(void) {

			return a + b;
		}
};

class Derive: public Base {

	public:

		void getNum(void) {

			cout << "Addition is : " << add();
		}
};

int main() {

	Derive d;

	d.setNum(5, 6);
	d.getNum();

}
