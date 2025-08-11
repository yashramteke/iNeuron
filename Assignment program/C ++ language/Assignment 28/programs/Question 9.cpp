/*Q9.Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.*/

#include <iostream>
using namespace std;

class Integer {

	private:
		int x = 10;

	public:

		operator int() {

			return x;

		}
};

int main() {

	Integer i;

	int a = (int)i;

	cout << a;
}