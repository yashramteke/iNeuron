/*Q5. Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases 'n' items.
Display the item-wise bill and total amount using appropriate format.*/

#include <iostream>
using namespace std;

class Item {

	private:

		int item_no;
		string name;
		float price;

	public:

		void set_item_no(void) {
			cin >> item_no;
		}

		void set_name(void) {
			getline(cin, name);
		}

		void set_price(void) {
			cin >> price;
		}

		int ret_item_no(void) {
			return item_no;
		}

		string ret_name(void) {
			return name;
		}

		float ret_price(void) {
			return price;
		}

};

class Discounted_Item: public Item {

	private:

		float discount_percent;

	public:

		void input(void);
		void disp(void);

		float ret_discount_percent(void) {
			return discount_percent;
		}
};

void Discounted_Item::input(void) {

	cout << "Enter Item name : ";
	set_name();

	cout << "Enter Item no : ";
	set_item_no();
	fflush(stdin);

	cout << "Enter Item price : ";
	set_price();
	fflush(stdin);

	cout << "Enter Discount Percent : ";
	cin >> discount_percent;
	fflush(stdin);
	cout << "---------------------------------" << endl << endl;
}

void Discounted_Item::disp(void) {

	cout << "Item Name : ";
	cout << ret_name() << endl;

	cout << "Item No. : ";
	cout << ret_item_no() << endl;

	cout << "Item Price : ";
	cout <<	ret_price() << endl;

	cout << "Discount Percent : ";
	cout << discount_percent << endl;

	cout << "Discounted Price : ";
	cout << ret_price() - ((discount_percent / 100)*ret_price()) << endl;

	cout << "---------------------------------" << endl;
}

int main() {

	int n;
	float total_price = 0.0, total_discount = 0.0;

	cout << "How many items you want to enter? : ";
	cin >> n;

	fflush(stdin);

	Discounted_Item d[n];

	for (int i = 0; i < n; i++) {

		d[i].input();
	}

	for (int i = 0; i < n; i++) {

		d[i].disp();

		total_price = d[i].ret_price() + total_price;
		total_discount = ( d[i].ret_price() - ((d[i].ret_discount_percent() / 100) * d[i].ret_price())) + total_discount;
	}

	cout << "---------------------------------" << endl;

	cout << "Total price : " << total_price << endl;
	cout << "Total discount : " << total_discount;
}