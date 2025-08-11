/*Q10.Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.*/

#include <iostream>
using namespace std;

class Distance {

	private:
		int feet, inches;


	public:
		Distance() {
		}

		Distance(int f, int i) {
			feet = f;
			inches = i;
		}

		void operator ()(int a, int b, int c ) {

			feet = a + c + 5;
			inches = a + b + 15;
		}
		void disp() {
			cout << "feet : " << feet << endl << "inches : " << inches;
		}
};

int main() {

	Distance d;
	d(10, 20, 30);
	d.disp();
}