/*Q4. Create a Product class and convert Product type to Item type using casting operator
int main()
{
	Item i1;
	Product p1;
	p1.setData(3,4);
	i1=p1;
	return 0;
}*/

#include <iostream>
using namespace std;

class Item {

	private:
		int z;

	public:
		void disp() {

			cout << "z : " << z ;
		}

		Item() {
		}

		Item(int x) {
			z = x;
		}
};

class Product {

	private:
		int a, b;

	public:

		void setData(int a, int b) {

			this->a = a;
			this->b = b;
		}

		operator Item() {

			Item i = (a + b);
			return i;
		}

};

int main() {

	Item i1;
	Product p1;
	p1.setData(3, 4);
	i1 = p1;
	i1.disp();

}