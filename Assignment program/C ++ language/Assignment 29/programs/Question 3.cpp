/*Q3. Create a Product class and convert Product type to Item type using constructor
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

class Product {

	private:
		int a, b;

	public:

		void setData(int a, int b) {

			this->a = a;
			this->b = b;
		}
		int getA() {
			return a;
		}
		int getB() {
			return b;
		}

};

class Item {

	private:
		int z;

	public:
		void disp() {

			cout << "z : " << z ;
		}
		Item() {
		}
		Item(Product p1) {
			z = p1.getA() + p1.getB();
		}
};



int main() {

	Item i1;
	Product p1;
	p1.setData(3, 4);
	i1 = (Product)p1;
	i1.disp();

}