/*Q8. Create a Rupee class and convert it into int. And Display it.
Example-
int main()
{
	Rupee r = 10;
	int x = r;
	cout<<x;
	return 0;
}*/

#include <iostream>
using namespace std;

class Rupee {

	private:
		int rs;

	public:

		Rupee(int rs) {

			this->rs = rs;
		}

		operator int() {

			return rs;
		}
};

int main() {

	Rupee r = 10;
	int x = r;
	cout << x;
	return 0;
}