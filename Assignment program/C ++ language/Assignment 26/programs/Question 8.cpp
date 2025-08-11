/*Q8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.*/

#include <iostream>
using namespace std;

class Bank {

	private:
		float principal, year, roi;
	public:

		Bank(float p, float y, float r) {
			principal = p;
			year = y;
			roi = r;
		}

		void read(void) {
			cout << "Your Principal : " << principal << endl;
			cout << "Your Rate of interest : " << roi << endl;
			cout << "Your Duration : " << year << " year";
		}

		void cal(void) {
			float si = (principal * roi * year) / 100;

			cout << endl << endl << "Simple Interest : " << si;
		}
};

int main() {

	Bank b(10000, 10, 6);

	b.read();
	b.cal();

}