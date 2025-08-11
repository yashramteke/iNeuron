//Q3. Define a function to calculate x raised to the power y.

#include <iostream>
using namespace std;

void calculate(void);

int main() {

	calculate();

}

void calculate(void) {
	int x, y, ans = 1;

	cout << "Enter number = ";
	cin >> x;

	cout << "Enter power = ";
	cin >> y;

	while (y) {
		ans = ans * x;
		y--;
	}
	cout << "\n Answer = " << ans;
}