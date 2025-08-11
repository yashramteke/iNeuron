//Q9. Define a class Circle and define an instance member function to find the area of the circle.

#include <iostream>
using namespace std;

class Circle {

	private:
		float r;

	public:
		void area(void) {

			cout << "Enter radius : ";
			cin >> r;

			cout << "Area : " << (22 / 7)*r *r;
		}
};

int main() {

	Circle c;
	c.area();
}