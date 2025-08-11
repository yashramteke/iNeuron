/*Q8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3.
Where c1,c2,and c3 are objects of 3D coordinate class.*/

#include <iostream>
using namespace std;

class Coordinate {

	private:
		int x, y, z;

	public:

		Coordinate() {
		}

		Coordinate(int x, int y, int z) {

			this->x = x;
			this->y = y;
			this->z = z;
		}

		Coordinate operator, (Coordinate tmp) {

			x = tmp.x;
			y = tmp.y;
			z = tmp.z;

			return tmp;
		}

		void disp() {
			cout << "x : " << x << endl << "y : " << y << endl << "z : " << z;
		}
};

int main() {

	Coordinate c1(10, 20, 30);
	Coordinate c2(40, 50, 60);
	Coordinate c3;

	c3 = (c1, c2);

	c3.disp();
}