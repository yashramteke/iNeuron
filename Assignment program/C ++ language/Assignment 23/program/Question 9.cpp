//Q9. Write a C++ program to find the maximum of two numbers.

#include <iostream>
using namespace std;

int main() {

	int a, b, ans;

	cout << "Enter 1st number = ";
	cin >> a;

	cout << "Enter 2nd number = ";
	cin >> b;

	ans = (a > b) ? a : b;

	cout << "\nLargest number = " << ans ;

}