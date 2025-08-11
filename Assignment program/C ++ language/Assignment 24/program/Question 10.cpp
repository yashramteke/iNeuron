//Q10. Write functions using function overloading to add two numbers having different data types.

#include <iostream>
using namespace std;

int add(int a, int b);
float add(float c, float d);

int main() {

	int a, b;
	float c, d;

	cout << "Enter number = ";
	cin >> a >> b;
	cout << "Sum is = " << add(a, b);

	cout << endl << endl << "Enter number = ";
	cin >> c >> d;
	cout << "Sum is = " << add(c, d);
}

int add(int a, int b) {
	return a + b;
}

float add(float c, float d) {
	return c + d;
}