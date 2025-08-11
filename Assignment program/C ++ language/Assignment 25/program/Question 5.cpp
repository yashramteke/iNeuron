//Q5. Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.

#include <iostream>
using namespace std;

class ReverseNumber {

	private:
		int num, rev = 0;

	public:
		void Reverse(void) {

			cout << "Enter number : ";
			cin >> num;

			do {
				rev = rev * 10;
				rev = rev + (num % 10);
			} while (num /= 10);

			cout << "Revers of a number : " << rev;
		}
};

int main() {

	ReverseNumber r;
	r.Reverse();
}