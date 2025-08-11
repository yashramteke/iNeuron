//Q5. Write a C++ program to calculate the volume of a cuboid.

#include <iostream>
using namespace std;

int main() {

	float l, b, h, VoC;

	cout << "Enter Length = ";
	cin >> l;

	cout << "Enter Breadth = ";
	cin >> b;

	cout << "Enter Height = ";
	cin >> h;

	VoC = l * b * h;

	cout << "\nVolume of a Cuboid = " << VoC;

}