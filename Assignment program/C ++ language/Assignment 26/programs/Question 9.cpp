/*Q9.Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/

#include <iostream>
using namespace std;

class Bill {

	private:
		char name[60];
		float unit;
		float amount;
	public:

		void get(void);
		void calculateBill();
};

void Bill::get(void) {

	cout << "Enter Customer Name : ";
	fgets(name, 60, stdin);

	cout << "Enter Unit : ";
	cin >> unit;
}

void Bill::calculateBill() {

	if (unit <= 100) {
		amount = unit * 1.20;
	} else if (unit >= 100 && unit <= 200) {
		amount = 99 * 1.20;
		unit = unit - 99;
		amount = amount + (unit * 2);
	} else {
		amount = 99 * 1.20;
		unit = unit - 99;

		amount = amount + (101 * 2);
		unit = unit - 101;

		amount = amount + (unit * 3);
	}

	cout << endl << "Electricity Bill : " << amount << " Rs.";
}

int main() {

	Bill b;

	b.get();
	b.calculateBill();
}