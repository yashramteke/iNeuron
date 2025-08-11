//Q5. Create a student class and overload new and delete operators outside the class.

#include <iostream>
using namespace std;

class Student {

	private:

		int a = 10;

	public:
		Student() {
			cout << "constructor called" << endl;
		}

		void disp(void) {

			cout << "New and Delete operator overloded";
		}

};

void *operator new (size_t size) {

	cout << "inside new" << endl;

	void *p = malloc (size);

	return p;
}

void operator delete (void *p) {

	free(p);
}

int main() {

	Student *p;

	p = new Student();

	p->disp();

	delete p;

}