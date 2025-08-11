/*Q4. Write a C++ program to design a base class Person (name, address, phone_no).
Derive a class Employee (eno, ename) from Person.
Derive a class Manager (designation, department name, basic-salary) from Employee.
Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary*/


#include <iostream>
#include <conio.h>
using namespace std;

class Person {

private:
    string name, address, phone_no;

public:
    void p_name(void) {
        getline(cin, name);
    }
    void p_address(void) {
        getline(cin, address);
    }
    void p_phone_no(void) {
        getline(cin, phone_no);
    }
    string ret_name(void) {
        return name;
    }


};

class Employee:public Person {

private:
    string eno;
    string ename;

public:
    void e_eno(void) {
        getline(cin, eno);
    }
    void e_ename(void) {
        getline(cin, ename);
    }
};

class Manager:public Employee {

private:
    string designation, department_name;
    float basic_salary;

public:
    void input(void);
    float ret_sal(void) {
        return basic_salary;
    };
};

void Manager::input(void) {

fflush(stdin);
    cout<<"Enter Manager Name : ";
    p_name();

    cout<<"Enter Manager Address : ";
    p_address();

    cout<<"Enter Manager Phone No. : ";
    p_phone_no();

    cout<<"Enter Manager Employee No. :";
    e_eno();

    cout<<"Enter Manager Employee Name :";
    e_ename();

    cout<<"Enter Designation : ";
    getline(cin, designation);

    cout<<"Enter Department Name : ";
    getline(cin, department_name);

    cout<<"Enter Basic Salary : ";
    cin>>basic_salary;
}

int main() {

    int n, high = 0;

    cout<<"How many managers you want to enter : ";
    cin>>n;

    Manager m[n];

    for(int i=0; i<n; i++) {

        m[i].input();
        cout<<"---------------------------------"<<endl<<endl;
    }

    for(int i=1; i<n; i++) {

        if(m[high].ret_sal() > m[i].ret_sal())
            high = high;
        else
            high = i;
    }

    cout<<"Highest Salary : "<<m[high].ret_sal()<<endl;
    cout<<"And, Manager Name is : "<<m[high].ret_name();

}
