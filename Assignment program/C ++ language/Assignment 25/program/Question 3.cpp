//Q3. Define a class Factorial and define an instance member function to find the Factorial of a number using class.

#include <iostream>
using namespace std;

class Factorial {

	private:
		int num, ans;

	public:
		void setData(void) {

			cout << "Enter number : ";
			cin >> num;
		}

		void fact(void) {
			ans = num;

			while (--num) {
				ans = ans * (num);
			}
		}

		void disp(void) {

			cout << "Factorial : " << ans;
		}
};

int main() {

	Factorial f;

	f.setData();
	f.fact();
	f.disp();
}