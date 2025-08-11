/*Q10.Create two classes Rupee and Dollar and add necessary functions to support Rupee to Dollar and Dollar to Rupee conversion.
Example-
int main()
{
	Rupee r = 23;
	Dollar d = r; // Rupee to Dollar conversion
	d.display();
	r.display();
	r = d; // Dollar to Rupee Conversion
	d.display();
	r.display();
	return 0;
}*/

#include <iostream>
using namespace std;

class Rupee {

	private:
		float r;

	public:

		Rupee(float r) {

			this->r = r;
		}

		int getR(void) {

			return r;
		}

		void display(void) {

			cout << "Rupee : " << r << endl;
		}
};


class Dollar {

	private:
		float d;

	public:
		Dollar() {
		}

		Dollar(Rupee rs) {

			d = rs.getR() / 80.0;
		}

		void display(void) {

			cout << "Dollar : " << d << endl;
		}

		operator Rupee() {

			return d * 80.0;
		}
};


int main() {

	Rupee r = 23;
	
	Dollar d = r; // Rupee to Dollar conversion
	d.display();
	r.display();
	
	r = d; // Dollar to Rupee Conversion
	d.display();
	r.display();
}