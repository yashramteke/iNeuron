/*Q7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.*/

#include <iostream>
using namespace std;

class Box {

	private:
		float length, breadth, height;
	public:
		Box(int l, int b, int h) {

			length = l;
			breadth = b;
			height = h;
		}

		void cal(void) {

			cout << "Volume of the box : " << length *breadth *height;
		}
};

int main() {

	Box b(5, 5, 5);

	b.cal();
}