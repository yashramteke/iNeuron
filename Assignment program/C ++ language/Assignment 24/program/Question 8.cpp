//Q8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.

#include <iostream>
using namespace std;

float area(float r);
int area(int l, int b, int h);
double area(double b, double h);

int main() {

	float r;
	int l, w;
	double base, height;

	cout << "Enter radius = ";
	cin >> r;

	cout << "Enter Length,Width = ";
	cin >> l >> w;

	cout << "Enter base, height = ";
	cin >> base >> height;

	cout << endl << "Area of circle = " << area(r);
	cout << endl << "Area of rectangle = " << area(l, w);
	cout << endl << "Area of triangle = " << area(base, height);

}

float area(float r) {
	return 3.14 * ( r * r);
}

int area(int l, int w) {
	return l * w;
}

double area(double b, double h) {
	return (h * b) / 2;
}