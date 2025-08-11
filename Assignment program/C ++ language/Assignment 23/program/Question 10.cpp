//Q10. Write a C++ program to add all the numbers of an array of size 10.

#include <iostream>
using namespace std;

int main() {

	int arr[10], ans = 0;

	for (int i = 0; i < 10; i++) {

		cout << "Enter " << i + 1 << ") number = ";
		cin >> arr[i];

		ans = ans + arr[i];
	}

	cout << "\n\nSum of 10 number = " << ans;
}