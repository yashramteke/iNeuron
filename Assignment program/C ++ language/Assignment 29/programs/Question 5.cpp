/*Q5. Create two classes Invent1 and Invent2 and also add necessary constructors in it.
Now add functions to support Invent1 to float and Invent1 to Invent2 type.

Example -
int main()
{
	Invent1 s1=(4,5);
	Invent2 d1;
	float tv;
	tv=s1;
	d1=s1;
	return 0;
}*/

#include <iostream>
using namespace std;

class Invent1 {

	private:

		int a, b;

	public:

		Invent1() {
		}
		Invent1(int a, int b) {
			this->a = a;
			this->b = b;
		}

		operator float() {
			return (a + b) * 1.0;
		}

		int getA() {
			return a;
		}
		int getB() {
			return b;
		}

		void disp() {
			cout << "Invent1 a : " << a << " b : " << b << endl;
		}
};

class Invent2 {

	private:

		int a, b;

	public:
		Invent2() {}

		Invent2(Invent1 z) {
			a = z.getA();
			b = z.getB();
		}

		void disp() {
			cout << "Invent2 a : " << a << " b : " << b << endl;
		}
};

int main() {
	Invent1 s1(4, 5);
	Invent2 d1;
	float tv;
	tv = s1;
	d1 = s1;

	cout << "float tv : " << tv << endl;
	s1.disp();
	d1.disp();



}