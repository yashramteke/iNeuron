//Q6. Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.

#include <iostream>
using namespace std;

int count = 0;

class Square {

	private:
		int num;

	public:
		void square(void) {

			cout << "Enter number : ";
			cin >> num;

			num = num * num;

			cout << endl << "Square : " << num << endl << endl;

			count = count + 1;
		}
};

int main() {

	Square s;

	s.square();
	s.square();
	s.square();

	cout << endl << endl << "Number of times function called : " << count;
}