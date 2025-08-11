//Q8. Define a class Rectangle and define an instance member function to find the area of the rectangle.

#include <iostream>
using namespace std;

class Rectangle {

	private:
		float w, l;

	public:
		void area(void) {

			cout << "Enter width and length : ";
			cin >> w >> l;

			float area = w * l;

			cout << "Area : " << area;
		}
};

int main() {

	Rectangle r;
	r.area();
}