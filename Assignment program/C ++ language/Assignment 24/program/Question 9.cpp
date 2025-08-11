//Q9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real..

#include <iostream>
using namespace std;

int max(int a, int b);
float max(float c, float d);

int main() {

	int a, b;
	float c, d;

	cout << "Enter number = ";
	cin >> a >> b;
	cout << "Maximum number = " << max(a, b) << endl << endl;

	cout << "Enter number = ";
	cin >> c >> d;
	cout << "Maximum number = " << max(c, d) << endl << endl;
}

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

float max(float c, float d) {
	if (c > d)
		return c;
	else
		return d;
}