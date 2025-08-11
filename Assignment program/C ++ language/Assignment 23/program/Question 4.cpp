//Q4. Write a C++ program to calculate the area of a circle

#include <iostream>
using namespace std;

int main() {

	int r;
	float pie = 3.14f, AoC;

	cout << "Enter radius = ";
	cin >> r;

	AoC = pie * (r * r);

	cout << "\nArea of a Circle = " << AoC;

}