/*Q6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details*/

#include <iostream>

using namespace std;

class Student {

	private:
		char name[30], grade[6];
		int roll;

	public:
		Student() {
			cout << "Enter Student name :";
			fgets(name, 30, stdin);

			fflush(stdin);

			cout << "Enter Grade :";
			fgets(grade, 6, stdin);

			fflush(stdin);

			cout << "Enter Roll no. :";
			cin >> roll;

		}

		void show(void) {

			cout << endl << "Name :" << name;
			cout << "Grade :" << grade;
			cout << "Roll no. : " << roll;
		}
};

int main() {
	Student s;

	s.show();

}