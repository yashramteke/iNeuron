/*Q1. Define a class Person with instance members name and age.
Also define member functions setName(), setAge(), getName(), getAge().
Now define class Employee by inheriting Person class.
In the Employee class define empid and salary as instance members.
Also define setEmpid, setSalary, getEmpid, getSalary.*/

#include <iostream>
using namespace std;

class Person {

	private:

		string name;
		int age;

	public:

		void setName(void);
		void setAge(void);
		void getName(void);
		void getAge(void);
};

void Person::setName(void) {

	cout << "Enter Name : ";
	getline(cin, name);
}

void Person::setAge(void) {

	cout << "Enter Age : ";
	cin >> age;
}

void Person::getName(void) {

	cout << "Your Name : ";
	cout << name;
}

void Person::getAge(void) {

	cout << "Your Age : ";
	cout << age;
}


class Employee : public Person {

	private:

		int empid;
		float salary;

	public:

		void setEmpid(void);
		void setSalary(void);
		void getEmpid(void);
		void getSalary(void);

};

void Employee::setEmpid(void) {

	cout << "Enter Empid : ";
	cin >> empid;
}

void Employee::setSalary(void) {

	cout << "Enter Salary : ";
	cin >> salary;
}

void Employee::getEmpid(void) {

	cout << "Your Empid : ";
	cout << empid;
}

void Employee::getSalary(void) {

	cout << "Your Salary : ";
	cout << salary;
}

int main() {

	Employee e1;

	e1.setName();
	e1.setAge();
	e1.setEmpid();
	e1.setSalary();

	cout << endl;

	e1.getName();
	cout << endl;

	e1.getAge();
	cout << endl;

	e1.getEmpid();
	cout << endl;

	e1.getSalary();
}