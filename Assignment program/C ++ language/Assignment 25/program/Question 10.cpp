//Q10. Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle, circle etc.

#include <iostream>
using namespace std;

class Area {

	private:
		float a, w, l, r;
	public:
		void square(void) {
			cout << "Enter side of a square : ";
			cin >> a;

			cout << "Area of square ; " << a *a;
		}

		void circle(void) {

			cout << "Enter radius : ";
			cin >> r;

			cout << "Area : " << (22 / 7)*r *r;
		}

		void rect(void) {

			cout << "Enter width and length : ";
			cin >> w >> l;

			float area = w * l;

			cout << "Area : " << area;
		}
};

int main() {

	Area a;
	a.circle();

	cout << endl;

	a.rect();

	cout << endl;

	a.square();
}