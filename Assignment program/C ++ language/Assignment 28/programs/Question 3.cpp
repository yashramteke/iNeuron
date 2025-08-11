//Q3. Overload subscript operator [] that will be useful when we want to check for an index out of bound.

#include <iostream>
using namespace std;

class Array {

	private:
		int *arr;
		int size;

	public:
		Array() {

			cout << "Enter Size of array : ";
			cin >> size;

			arr = (int *)malloc(sizeof(int) * size);
		}

		int &operator[](int index) {

			if (index >= size) {

				cout << "Array out of bound" << endl;
				exit(0);

			}	else
				return arr[index];
		}

};

int main() {

	Array z;

	z[0] = 58;
	z[1] = 10;
	z[2] = 20;

	cout << z[0] << z[1] << z[2];

}