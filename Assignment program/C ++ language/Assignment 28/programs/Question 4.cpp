//Q4. Create a student class and overload new and delete operators as a member function of the class.

#include <iostream>
using namespace std;

class Student {

	private:
		int *p;

	public:

		void *operator new (size_t size) {

			void *p = ::operator new (size);

			return p;
		}

		void operator delete (void *p) {
			free(p);
		}

		void disp(void) {
			cout << "Operator overload successful";
		}
};



int main() {

	Student *p;

	p = (Student *)new Student();

	p->disp();

	delete (p);
}