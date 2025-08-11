//Q4. Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class.

#include <iostream>
using namespace std;

class LargestNumber {

	private:

	public:
		void Largest(int *a, int *b, int *c) {

			( *a > *b) ? (*a > *c) ? cout << *a << " is greater" : cout << *c << " is greater" :
			                              (*b > *c) ? cout << *b << " is greater" : cout << *c << " is greater";
		}
};

int main() {

	LargestNumber L;

	int a, b, c;

	cout << "Enter three numbers : ";
	cin >> a >> b >> c;

	L.Largest(&a, &b, &c);
}