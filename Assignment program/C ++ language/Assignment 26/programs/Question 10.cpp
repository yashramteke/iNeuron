//Q10. Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result.

#include <iostream>
using namespace std;

class StaticCount {

	public:
		static int count;

		void fun(void) {

			count = count + 1;
		}
		void disp(void) {
			cout << count;
		}
};

int main() {

	StaticCount c;

	c.fun();
	c.fun();
	c.fun();

	c.disp();
}