/*Q2. Define a class Time to represent Time (like 3 hr 45 min 20 sec).
Declare appropriate number of instance member variables and also define instance member functions
to set values for time and display values of time.*/

#include <iostream>
using namespace std;

class Time {

	private:
		int hr, min, sec;

	public:
		void setValue(void) {

			cout << "Enter Hour : ";
			cin >> hr;

			cout << "Enter Minute : ";
			cin >> min;

			cout << "Enter Second : ";
			cin >> sec;
		}

		void disp(void) {

			cout << "\nTime : " << hr << " hr " << min << " min " << sec << " sec";
		}
};

int main() {

	Time t;

	t.setValue();
	t.disp();
}