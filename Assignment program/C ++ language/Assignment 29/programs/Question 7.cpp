/*Q7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
	Time t1(2,30);
	t1.display();
	Minute m1;
	m1.display();
	m1=t1	// Fetch minute from time
	t1.display();
	m1.display();
	return 0;
}*/

#include <iostream>
using namespace std;

class Time {

	private:
		int H, M;

	public:

		Time(int h, int m) {

			H = h;
			M = m;
		}

		void display(void) {

			cout << H << " Hr : " << M << " min" << endl;
		}

		int getH(void) {

			return H;
		}

		int getM(void) {

			return M;
		}

};

class Minute {

	private:
		int min;

	public:
		Minute() {

			min = 0;
		}

		void display(void) {

			cout << min << " min" << endl;
		}

		Minute(Time t) {

			min = t.getH() * 60;
			min = min + t.getM();

		}


};

int main() {

	Time t1(2, 30);
	t1.display();

	Minute m1;
	m1.display();

	m1 = t1;

	m1.display();
	t1.display();
}