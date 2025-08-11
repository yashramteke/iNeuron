//Q7. Write a function using the default argument that is able to add 2 or 3 numbers.

#include <iostream>
using namespace std;

int add(int, int, int = 0);

int main() {

	cout << add(5, 5) << endl;
	cout << add(5, 5, 5);

}

int add(int a, int b, int c) {

	return a + b + c;
}