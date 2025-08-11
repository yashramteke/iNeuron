/*Q5. Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.*/

#include <iostream>
using namespace std;

class Numbers {

	private:
		int x, y, z;

	public:
		void set(void) {

			cout << "Enter value of x : ";
			cin >> x;

			cout << "Enter value of y : ";
			cin >> y;

			cout << "Enter value of z : ";
			cin >> z;
		}

		void operator- (void) {

			x = -x;
			y = -y;
			z = -z;
		}

		void show(void) {

			cout << "x : " << x << endl;
			cout << "y : " << y << endl;
			cout << "z : " << z;
		}
};

int main() {

	Numbers n;

	n.set();
	n.operator - ();
	n.show();
}